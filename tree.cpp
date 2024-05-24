#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Class for the binary tree.
class BinaryTree {
public:
    TreeNode* root;

    // Constructor
    BinaryTree() {
        root = NULL;
    }

    // Destructor
    ~BinaryTree() {
        destroyTree(root);
    }

    // Function to insert a new node in the binary tree
    void insert(int key) {
        if (root == NULL) {
            root = new TreeNode(key);
        } else {
            insert(key, root);
        }
    }

    // Function to print the tree (in-order traversal)
    void printInOrder() {
        inOrderTraversal(root);
        cout << endl;
    }

private:
    // Helper function to insert a new node
    void insert(int key, TreeNode* leaf) {
        if (key < leaf->val) {
            if (leaf->left != NULL) {
                insert(key, leaf->left);
            } else {
                leaf->left = new TreeNode(key);
            }
        } else {
            if (leaf->right != NULL) {
                insert(key, leaf->right);
            } else {
                leaf->right = new TreeNode(key);
            }
        }
    }

    // Helper function for in-order traversal
    void inOrderTraversal(TreeNode* node) {
        if (node != NULL) {
            inOrderTraversal(node->left);
            cout << node->val << " ";
            inOrderTraversal(node->right);
        }
    }

    // Helper function to destroy the tree
    void destroyTree(TreeNode* node) {
        if (node != NULL) {
            destroyTree(node->left);
            destroyTree(node->right);
            delete node;
        }
    }
};

int main() {
    BinaryTree tree;

    // Insert nodes
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    // Print in-order traversal
    cout << "In-order traversal: ";
    tree.printInOrder();

    return 0;
}
