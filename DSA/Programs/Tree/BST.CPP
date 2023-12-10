#include<iostream>
#include<queue>
using namespace std;
int max(int,int);
class TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    public:
    TreeNode(int);
    
    TreeNode* insert(TreeNode*&,int);
    bool search(TreeNode*&,int);
    int getMin(TreeNode*);
    int getMax(TreeNode*);
    int getHeight(TreeNode*);
    void levelorder(TreeNode*);
    void preorder(TreeNode*);
    void inorder(TreeNode*);
    void postorder(TreeNode*);
    bool IsBSTUtil(TreeNode*);
    bool IsSubtreeLesser(TreeNode*,int);
    bool IsSubtreeGreater(TreeNode*,int);
    bool IsBinarySearchTree(TreeNode*);
};
int main()
{
    TreeNode* root=nullptr;
    TreeNode* addd=nullptr;
    int a[9]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++)
    root->insert(root,a[i]);

    
    cout<<"PostOrder printing: ";
    root->postorder(root);
    cout<<endl<<"PreOrder printing: ";
    root->preorder(root);
    cout<<endl<<"inOrder printing: ";
    root->inorder(root);
    
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
bool TreeNode::IsBinarySearchTree(TreeNode* root)
{
    if(IsBSTUtil(root))
    return true;
    else
    return false;
}
bool TreeNode::IsBSTUtil(TreeNode* root)
{
    if(root==nullptr)
    return true;
    if(IsSubtreeGreater(root->left,root->data)
    &&IsSubtreeLesser(root->right,root->data)
    &&IsBSTUtil(root->right)
    &&IsBSTUtil(root->left))
    return true;
    else 
    return false;
}
bool TreeNode::IsSubtreeLesser(TreeNode* root,int value)
{
    if(root==nullptr)
    return true;
    if(root->data<=value
    &&IsSubtreeLesser(root->left,value)
    &&IsSubtreeLesser(root->right,value))
    return true;
    else 
    return false;
}
bool TreeNode::IsSubtreeGreater(TreeNode* root,int value)
{
    if(root==nullptr)
    return true;
    if(root->data>value
    &&IsSubtreeGreater(root->left,value)
    &&IsSubtreeGreater(root->right,value))
    return true;
    else 
    return false;
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
void TreeNode::inorder(TreeNode* root)
{
    if(root)
    {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    }

}
void TreeNode::postorder(TreeNode* root)
{
    if(root!=nullptr)
    {
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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
int TreeNode::getHeight(TreeNode* root)
{
    if(root==NULL)
    return -1;
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);
    return (max(leftHeight,rightHeight)+1);
}
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int TreeNode::getMin(TreeNode* root){
if(root==nullptr)
{
cout<<"\nError:tree is empty";
return -1;
}
else if(root->left==nullptr)
{
    return root->data;
}
else
{
    getMin(root->left);
}
}
int TreeNode::getMax(TreeNode* root){
if(root==nullptr)
{
cout<<"\nError:tree is empty";
return -1;
}
else if(root->right==nullptr)
{
    return root->data;
}
else
{
    getMin(root->right);
}
}
bool TreeNode::search(TreeNode* &root,int d)
{
    if(root==nullptr)
    return false;
    else if(root->data==d)
    return true;
    else if(data>root->data)
    {
        search(root->right,d);
    }
    else if(data<root->data)
    {
        return search(root->left,d);
    }

}

TreeNode::TreeNode(int d)
{
left=nullptr;
right=nullptr;
data=d;
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
}