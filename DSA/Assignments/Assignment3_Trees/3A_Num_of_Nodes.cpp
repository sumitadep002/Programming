<<<<<<< HEAD
#include<iostream>
#include<queue>
using namespace std;
int count;
class TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    public:
    TreeNode(int d){left=nullptr,right=nullptr;data=d;}
    TreeNode* insert(TreeNode*&,int);
    void preorder(TreeNode*);
};
int main()
{
    TreeNode* root=nullptr;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++)
    root=root->insert(root,arr[i]);
    root->preorder(root);
    cout<<count;
    return 0;
}

TreeNode* TreeNode::insert(TreeNode* &root,int d)
{
    if(root==nullptr)
    {
    root=new TreeNode(d);
    }
    else if(root->data<d)
    {
        insert(root->left,d);
    }
    else
    {
        insert(root->right,d);
    }
    return root;
}

void TreeNode::preorder(TreeNode* root)
{
   
    if(root!=nullptr)
    {
    count++;
    preorder(root->left);
    preorder(root->right);
    }
    
=======
#include<iostream>
#include<queue>
using namespace std;
int count;
class TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    public:
    TreeNode(int d){left=nullptr,right=nullptr;data=d;}
    TreeNode* insert(TreeNode*&,int);
    void preorder(TreeNode*);
};
int main()
{
    TreeNode* root=nullptr;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++)
    root=root->insert(root,arr[i]);
    root->preorder(root);
    cout<<count;
    return 0;
}

TreeNode* TreeNode::insert(TreeNode* &root,int d)
{
    if(root==nullptr)
    {
    root=new TreeNode(d);
    }
    else if(root->data<d)
    {
        insert(root->left,d);
    }
    else
    {
        insert(root->right,d);
    }
    return root;
}

void TreeNode::preorder(TreeNode* root)
{
   
    if(root!=nullptr)
    {
    count++;
    preorder(root->left);
    preorder(root->right);
    }
    
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
}