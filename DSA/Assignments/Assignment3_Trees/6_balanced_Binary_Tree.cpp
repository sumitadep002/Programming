<<<<<<< HEAD
/*A binary tree is said to be "balanced" if both of its subtrees are balanced and the height of its left subtree differs from the
 height of its right subtree by at most 1. Write a C function to determine whether a given binary tree is balanced*/
#include<iostream>
#include<queue>
using namespace std;

class TreeNode
{
    char data;
    TreeNode *left;
    TreeNode *right;

    public:
    TreeNode(char d){left=nullptr,right=nullptr;data=d;}
    void insert(TreeNode*&,int);
    int isBalancedTree(TreeNode*);
};
int main()
{
    TreeNode* root=nullptr;
    char arr[]={'E','C','B','A','D','H','F','G','I'};
    for(int i=0;i<9;i++)
    root->insert(root,arr[i]);
    if(root->isBalancedTree(root)==-1)
    cout<<"Tree is emty";
    else if (root->isBalancedTree(root)==0)
    {
       cout<<"Tree is not a balanced tree";
    }
    else
    cout<<endl<<"Tree is a balanced tree";
    
    
    return 0;
}

void TreeNode::insert(TreeNode* &root,int d)
{
    if(root==nullptr)
    {
    root=new TreeNode(d);
    }
    else if(root->data<d)
    {
        insert(root->right,d);
    }
    else
    {
        insert(root->left,d);
    }
    // return root;
}


int TreeNode::isBalancedTree(TreeNode* root)
{
    if(root==NULL)
    return -1;
    int leftHeight=isBalancedTree(root->left);
    int rightHeight=isBalancedTree(root->right);
    if(abs(leftHeight - rightHeight) <= 1 && isBalancedTree(root->left) && isBalancedTree(root->right))
    return 1;
    else 
    return 0;

    return (max(leftHeight,rightHeight)+1);
=======
/*A binary tree is said to be "balanced" if both of its subtrees are balanced and the height of its left subtree differs from the
 height of its right subtree by at most 1. Write a C function to determine whether a given binary tree is balanced*/
#include<iostream>
#include<queue>
using namespace std;

class TreeNode
{
    char data;
    TreeNode *left;
    TreeNode *right;

    public:
    TreeNode(char d){left=nullptr,right=nullptr;data=d;}
    void insert(TreeNode*&,int);
    int isBalancedTree(TreeNode*);
};
int main()
{
    TreeNode* root=nullptr;
    char arr[]={'E','C','B','A','D','H','F','G','I'};
    for(int i=0;i<9;i++)
    root->insert(root,arr[i]);
    if(root->isBalancedTree(root)==-1)
    cout<<"Tree is emty";
    else if (root->isBalancedTree(root)==0)
    {
       cout<<"Tree is not a balanced tree";
    }
    else
    cout<<endl<<"Tree is a balanced tree";
    
    
    return 0;
}

void TreeNode::insert(TreeNode* &root,int d)
{
    if(root==nullptr)
    {
    root=new TreeNode(d);
    }
    else if(root->data<d)
    {
        insert(root->right,d);
    }
    else
    {
        insert(root->left,d);
    }
    // return root;
}


int TreeNode::isBalancedTree(TreeNode* root)
{
    if(root==NULL)
    return -1;
    int leftHeight=isBalancedTree(root->left);
    int rightHeight=isBalancedTree(root->right);
    if(abs(leftHeight - rightHeight) <= 1 && isBalancedTree(root->left) && isBalancedTree(root->right))
    return 1;
    else 
    return 0;

    return (max(leftHeight,rightHeight)+1);
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
}