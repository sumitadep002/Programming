<<<<<<< HEAD
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
    void preorder(TreeNode*);
    void inorder(TreeNode*);
    void postorder(TreeNode*);
    void  levelorder(TreeNode*);
};
int main()
{
    TreeNode* root=nullptr;
    char arr[5]={'C','B','A','D','E'};
    for(int i=0;i<5;i++)
    root->insert(root,arr[i]);
    cout<<"preorder: ";
    root->preorder(root);
    cout<<"\ninorder: ";
    root->inorder(root);
    cout<<"\npostorder: ";
    root->postorder(root);
    cout<<"\nlevelorder: ";
    root->levelorder(root);
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
    else if(root->data>d)
    {
        insert(root->left,d);
    }
    // return root;
}
void TreeNode::levelorder(TreeNode* root)
{
    if(root==nullptr)
    return;
    queue <TreeNode*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        TreeNode* current = Q.front();
        cout<<current->data<<" ";
        if(current->left!=nullptr)
        Q.push(current->left);
        if(current->right!=nullptr)
        Q.push(current->right);
        Q.pop();
    }
}

void TreeNode::preorder(TreeNode* root)
{
   
    if(root!=nullptr)
    {
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    }
    
}
void TreeNode::inorder(TreeNode* root)
{
   
    if(root!=nullptr)
    {
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
    }
    
}
void TreeNode::postorder(TreeNode* root)
{
   
    if(root!=nullptr)
    {
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
    }
    
=======
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
    void preorder(TreeNode*);
    void inorder(TreeNode*);
    void postorder(TreeNode*);
    void  levelorder(TreeNode*);
};
int main()
{
    TreeNode* root=nullptr;
    char arr[5]={'C','B','A','D','E'};
    for(int i=0;i<5;i++)
    root->insert(root,arr[i]);
    cout<<"preorder: ";
    root->preorder(root);
    cout<<"\ninorder: ";
    root->inorder(root);
    cout<<"\npostorder: ";
    root->postorder(root);
    cout<<"\nlevelorder: ";
    root->levelorder(root);
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
    else if(root->data>d)
    {
        insert(root->left,d);
    }
    // return root;
}
void TreeNode::levelorder(TreeNode* root)
{
    if(root==nullptr)
    return;
    queue <TreeNode*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        TreeNode* current = Q.front();
        cout<<current->data<<" ";
        if(current->left!=nullptr)
        Q.push(current->left);
        if(current->right!=nullptr)
        Q.push(current->right);
        Q.pop();
    }
}

void TreeNode::preorder(TreeNode* root)
{
   
    if(root!=nullptr)
    {
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    }
    
}
void TreeNode::inorder(TreeNode* root)
{
   
    if(root!=nullptr)
    {
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
    }
    
}
void TreeNode::postorder(TreeNode* root)
{
   
    if(root!=nullptr)
    {
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
    }
    
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
}