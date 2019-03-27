%{
	#include <bits/stdc++.h>
	#include "infix_postfix.h"
	using namespace std;
	void yyerror (char const *s) {
   		fprintf (stderr, "%s\n", s);
 	}
%}

%union 
{
	TreeNode* a;
	double d;
}

%token <d> NUMBER
%token EOL
%type <a> exp factor term

%%

calclist :
	| calclist exp EOL {
		cout << "Infix: ";
		inorder($2);
		cout << endl;
		cout << "Prefix: ";
		preorder($2);
		cout << endl;
		cout << "Postfix: ";
		postorder($2);
		cout << endl;
		cout << "Evaluation: ";
		cout << eval($2);
		cout << endl;
	}
	| calclist EOL
	;

exp : factor 
	| exp '+' factor {
		$$ = makeNode(1, '+', -1, $1, $3);
	}
	| exp '-' factor {
		$$ = makeNode(1, '-', -1, $1, $3);
	}
	;

factor : term
	| factor '*' term {
		$$ = makeNode(1, '*', -1, $1, $3);
	}
	| factor '/' term {
		$$ = makeNode(1, '/', -1, $1, $3);
	}
	;

term : NUMBER {
		$$ = makeNode(0, '@', $1, NULL, NULL);
	}
	| '(' exp ')' {
		$$ = $2;
	}
	| '-' term {
		$$ = makeNode(1, 'U', -1, NULL, $2);
	}

%%

int main(int argc, char* argv[])
{
	yyparse();
}

TreeNode* makeNode(int type, char oper, int oped, TreeNode* left, TreeNode* right)
{
	if(type==0)
	{
		TreeNode* nn = new TreeNode;
		nn->type = 0;
		nn->oped = oped;
		nn->left = nn->right = NULL;
		return nn;
	}
	else
	{
		TreeNode* nn = new TreeNode;
		nn->type = 1;
		nn->oper = oper;
		nn->left = left;
		nn->right = right;
		return nn;
	}
}

void inorder(TreeNode* root)
{
	if(root==NULL)return;
	else
	{
		inorder(root->left);
		if(root->type==0)cout << root->oped << " ";
		else cout << root->oper << " ";
		inorder(root->right);
	}
}

void preorder(TreeNode* root)
{
	if(root==NULL)return;
	else
	{
		if(root->type==0)cout << root->oped << " ";
		else cout << root->oper << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(TreeNode* root)
{
	if(root==NULL)return;
	else
	{
		postorder(root->left);
		postorder(root->right);
		if(root->type==0)cout << root->oped << " ";
		else cout << root->oper << " ";
	}
}

int eval(TreeNode* root)
{
	if(root==NULL)return 0;
	else if(root->type==0)return root->oped;
	else
	{
		if(root->oper=='+')return eval(root->left) + eval(root->right);
		else if(root->oper=='-')return eval(root->left) - eval(root->right);
		else if(root->oper=='*')return eval(root->left) * eval(root->right);
		else if(root->oper=='/')return eval(root->left) / eval(root->right);
		else if(root->oper=='U')return ( - eval(root->right) );
	}
}