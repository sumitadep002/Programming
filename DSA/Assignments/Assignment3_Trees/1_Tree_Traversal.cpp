<<<<<<< HEAD
/*
 Give the inorder and postorder traversal for the tree whose preorder
 traversal is A B C - - D - - E - F - -. The letters correspond to
 labeled xernal BSTBSTnodes; the minus signs to external BSTBSTnodes.
        A
      / \
     B   C
        / \
       D   E
          /
         F


*/
#include <iostream>
using namespace std;

// Definition for a binary tree node.
template<class T> class TreeNode {
    T val;
    TreeNode* left;
    TreeNode* right;
    public:
  
    TreeNode(T x) : val(x), left(NULL), right(NULL) {}
    TreeNode* constructTree(T [], int& , int );
    void inorderTraversal(TreeNode* );
    void postorderTraversal(TreeNode* );
};



int main() {
    typedef char T;
    T pre[] = {'A', 'B', 'C', '-', '-', 'D', '-', '-', 'E', '-', 'F', '-', '-'};
    int size = sizeof(pre) / sizeof(pre[0]);
    int index = 0;
    TreeNode<T>* root = nullptr;
    root=root->constructTree(pre, index, size);

    cout << "Inorder Traversal: ";
    root->inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    root->postorderTraversal(root);
    cout << endl;

    return 0;
}

// Construct the tree from its preorder traversal.
template<class T>
TreeNode<T>* TreeNode<T>::constructTree(T pre[], int& index, int size) {
    if (index >= size || pre[index] == '-') {
        index++;
        return NULL;
    }
    TreeNode<T>* node = new TreeNode(pre[index++]);
    node->left = constructTree(pre, index, size);
    node->right = constructTree(pre, index, size);
    return node;
}

// Traverse the tree in inorder.
template<class T>
void TreeNode<T>::inorderTraversal(TreeNode<T>* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

// Traverse the tree in postorder.
template<class T>
void TreeNode<T>::postorderTraversal(TreeNode<T>* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
=======
/*
 Give the inorder and postorder traversal for the tree whose preorder
 traversal is A B C - - D - - E - F - -. The letters correspond to
 labeled xernal BSTBSTnodes; the minus signs to external BSTBSTnodes.
        A
      / \
     B   C
        / \
       D   E
          /
         F


*/
#include <iostream>
using namespace std;

// Definition for a binary tree node.
template<class T> class TreeNode {
    T val;
    TreeNode* left;
    TreeNode* right;
    public:
  
    TreeNode(T x) : val(x), left(NULL), right(NULL) {}
    TreeNode* constructTree(T [], int& , int );
    void inorderTraversal(TreeNode* );
    void postorderTraversal(TreeNode* );
};



int main() {
    typedef char T;
    T pre[] = {'A', 'B', 'C', '-', '-', 'D', '-', '-', 'E', '-', 'F', '-', '-'};
    int size = sizeof(pre) / sizeof(pre[0]);
    int index = 0;
    TreeNode<T>* root = nullptr;
    root=root->constructTree(pre, index, size);

    cout << "Inorder Traversal: ";
    root->inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    root->postorderTraversal(root);
    cout << endl;

    return 0;
}

// Construct the tree from its preorder traversal.
template<class T>
TreeNode<T>* TreeNode<T>::constructTree(T pre[], int& index, int size) {
    if (index >= size || pre[index] == '-') {
        index++;
        return NULL;
    }
    TreeNode<T>* node = new TreeNode(pre[index++]);
    node->left = constructTree(pre, index, size);
    node->right = constructTree(pre, index, size);
    return node;
}

// Traverse the tree in inorder.
template<class T>
void TreeNode<T>::inorderTraversal(TreeNode<T>* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

// Traverse the tree in postorder.
template<class T>
void TreeNode<T>::postorderTraversal(TreeNode<T>* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
};