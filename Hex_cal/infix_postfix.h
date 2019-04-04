extern int yylineno;
extern int yylex();

struct TreeNode
{
	int type;
	char oper;
	int oped;
	TreeNode *left, *right;
};

TreeNode* makeNode(int type, char oper, int oped, TreeNode* left, TreeNode* right);
void inorder(TreeNode* root);
void preorder(TreeNode* root);
void postorder(TreeNode* root);
int eval(TreeNode* root);