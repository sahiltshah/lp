%{
	#include "octal_cal.h"
	using namespace std;

	void yyerror(const char* s){
		fprintf(stderr, "%s\n", s);
	}	
%}

%union{
	TreeNode* a;
	int d;
}

%token <d> NUMBER
%token EOL
%type <a> exp

%left '+' '-'
%left '*' '/'
%nonassoc UM

%%

calclist :
	| calclist exp EOL {
		cout << "Prefix: ";
		preorder($2);
		cout << endl;
		cout << "Postfix: ";
		postorder($2);
		cout << endl;
		cout << "Evaluation: ";
		cout << eval($2) << " " << to_octal(eval($2));
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

int main(int argc, char* argv[]){
	yyparse();
}

TreeNode* makeNode(int type, char oper, int num, TreeNode* left, TreeNode* right){
	if(type==0){
		TreeNode* nn = new TreeNode;
		nn->type = 0;
		nn->num = num;
		nn->left = nn->right = NULL;
		return nn;
	}
	else{
		TreeNode* nn = new TreeNode;
		nn->type = 1;
		nn->oper = oper;
		nn->left = left;
		nn->right = right;
		return nn;
	}
}

void preorder(TreeNode* root){
	if(root==NULL)return;
	else{
		if(root->type==0)cout << root->num << " ";
		else cout << root->oper << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(TreeNode* root){
	if(root==NULL)return;
	else{
		postorder(root->left);
		postorder(root->right);
		if(root->type==0)cout << root->num << " ";
		else cout << root->oper << " ";
	}
}

int eval(TreeNode* root){
	if(root==NULL)return 0;
	else if(root->type==0)return root->num;
	else{
		if(root->oper=='+')return eval(root->left) + eval(root->right);
		else if(root->oper=='-')return eval(root->left) - eval(root->right);
		else if(root->oper=='*')return eval(root->left) * eval(root->right);
		else if(root->oper=='/')return eval(root->left) / eval(root->right);
		else if(root->oper=='U')return ( - eval(root->right) );
	}
}

string to_octal(int num){
	string ret;
	while(num>0){
		if(num%8==0)ret += "0";
		else if(num%8==1)ret += "1";
		else if(num%8==2)ret += "2";
		else if(num%8==3)ret += "3";
		else if(num%8==4)ret += "4";
		else if(num%8==5)ret += "5";
		else if(num%8==6)ret += "6";
		else if(num%8==7)ret += "7";

		num /= 8;
	}
	reverse(ret.begin(), ret.end());
	return ret;
}
