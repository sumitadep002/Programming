<<<<<<< HEAD
/*What value does the following C function return when called with each of the binary trees in question 2?*/
#include <iostream>
#include <queue>
using namespace std;
class TreeNode
{
    char data;
    TreeNode *left;
    TreeNode *right;

public:
    TreeNode(char d)
    {
        left = nullptr, right = nullptr;
        data = d;
    }
    void insert(TreeNode *&, int);
    int mystery(TreeNode *);
};

int main()
{
    TreeNode *root1 = nullptr;
    TreeNode *root2 = nullptr;
    TreeNode *root3 = nullptr;

    char a1[7] = {'D', 'B', 'A', 'C', 'F', 'E', 'G'};
    char a2[5] = {'C', 'B', 'A', 'D', 'E'};
    char a3[9] = {'E', 'C', 'B', 'A', 'D', 'H', 'F', 'G', 'I'};

    for(int i=0;i<7;i++)
    root1->insert(root1,a1[i]);

    for(int i=0;i<5;i++)
    root2->insert(root2,a2[i]);
    
    for(int i=0;i<9;i++)
    root3->insert(root3,a3[i]);

    cout<<root1->mystery(root1);
    cout<<endl<<root2->mystery(root2);
    cout<<endl<<root3->mystery(root3);
    return 0;
}

void TreeNode::insert(TreeNode *&root, int d)
{
    if (root == nullptr)
    {
        root = new TreeNode(d);
    }
    else if (root->data < d)
    {
        insert(root->right, d);
    }
    else
    {
        insert(root->left, d);
    }
    // return root;
}

int TreeNode::mystery(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    else
        return max(mystery(root->left), mystery(root->right));
=======
/*What value does the following C function return when called with each of the binary trees in question 2?*/
#include <iostream>
#include <queue>
using namespace std;
class TreeNode
{
    char data;
    TreeNode *left;
    TreeNode *right;

public:
    TreeNode(char d)
    {
        left = nullptr, right = nullptr;
        data = d;
    }
    void insert(TreeNode *&, int);
    int mystery(TreeNode *);
};

int main()
{
    TreeNode *root1 = nullptr;
    TreeNode *root2 = nullptr;
    TreeNode *root3 = nullptr;

    char a1[7] = {'D', 'B', 'A', 'C', 'F', 'E', 'G'};
    char a2[5] = {'C', 'B', 'A', 'D', 'E'};
    char a3[9] = {'E', 'C', 'B', 'A', 'D', 'H', 'F', 'G', 'I'};

    for(int i=0;i<7;i++)
    root1->insert(root1,a1[i]);

    for(int i=0;i<5;i++)
    root2->insert(root2,a2[i]);
    
    for(int i=0;i<9;i++)
    root3->insert(root3,a3[i]);

    cout<<root1->mystery(root1);
    cout<<endl<<root2->mystery(root2);
    cout<<endl<<root3->mystery(root3);
    return 0;
}

void TreeNode::insert(TreeNode *&root, int d)
{
    if (root == nullptr)
    {
        root = new TreeNode(d);
    }
    else if (root->data < d)
    {
        insert(root->right, d);
    }
    else
    {
        insert(root->left, d);
    }
    // return root;
}

int TreeNode::mystery(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    else
        return max(mystery(root->left), mystery(root->right));
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
}