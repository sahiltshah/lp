%{
	#include <bits/stdc++.h>
	#include "infix_postfix.h"
	using namespace std;
	void yyerror (char const *s) {
   		fprintf (stderr, "%s\n", s);
 	}
 	string to_hexadecimal(int num); 
%}

%union 
{
	TreeNode* a;
	int d;
}

%token <d> NUMBER
%token EOL
%type <a> exp
%left '-' '+'
%left '/' '*'
%nonassoc UM

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
		cout << eval($2) << " " << to_hexadecimal(eval($2));
		cout << endl;
	}
	| calclist EOL
	;

exp : NUMBER {
		$$ = makeNode(0, '@', $1, NULL, NULL);
	} 
	| exp '+' exp {
		$$ = makeNode(1, '+', -1, $1, $3);
	}
	| exp '-' exp {
		$$ = makeNode(1, '-', -1, $1, $3);
	}
	| exp '*' exp {
		$$ = makeNode(1, '*', -1, $1, $3);
	}
	| exp '/' exp {
		$$ = makeNode(1, '/', -1, $1, $3);
	}
	| '(' exp ')' {
		$$ = $2;
	}
	| '-' exp %prec UM {
		$$ = makeNode(1, 'U', -1, NULL, $2);
	}
	;

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

string to_hexadecimal(int num)
{
	string ret;
	while(num>0)
	{
		if(num%16==0)ret += "0";
		else if(num%16==1)ret += "1";
		else if(num%16==2)ret += "2";
		else if(num%16==3)ret += "3";
		else if(num%16==4)ret += "4";
		else if(num%16==5)ret += "5";
		else if(num%16==6)ret += "6";
		else if(num%16==7)ret += "7";
		else if(num%16==8)ret += "8";
		else if(num%16==9)ret += "9";
		else if(num%16==10)ret += "A";
		else if(num%16==11)ret += "B";
		else if(num%16==12)ret += "C";
		else if(num%16==13)ret += "D";
		else if(num%16==14)ret += "E";
		else if(num%16==15)ret += "F";

		num /= 16;
	}
	reverse(ret.begin(), ret.end());
	return ret;
}