#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Depth-First Search (DFS) Traversals

void inorder(Node *root) { // Left Node Right (LNR)
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root) { // Node Left Right (NLR)
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root) { // Left Right Node (LRN)
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Breadth-First Search (BFS) / Level Order Traversal
void levelOrderTraversal(Node *root) {
    if (root == NULL) return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
}

int main() {
    
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right = new Node(5);
    root->right->left = new Node(6);
    cout << "Inorder traversal : ";
    inorder(root);
    cout << endl
         << "Preorder traversal : ";
    preorder(root);
    cout << endl
         << "Postorder traversal : ";
    postorder(root);
    cout << endl
         << "Level Order Traversal : " << endl;
    levelOrderTraversal(root);
    return 0;
}