extern int yylineno;
extern int yylex();

#include <bits/stdc++.h>

struct TreeNode{
	int type;
	char oper;
	int num;
	TreeNode *left, *right;
};

TreeNode* makeNode(int type, char oper, int num, TreeNode* left, TreeNode* right);
void preorder(TreeNode* root);
void postorder(TreeNode* root);
int eval(TreeNode* root);
int to_integer(std::string s);
std::string to_octal(int num);