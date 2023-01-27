#include <iostream>

using namespace std;

// struct Node yang digunakan untuk membuat tree
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// fungsi untuk membuat node baru
Node *newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// fungsi rekursif untuk menampilkan tree secara pre-order
void preOrder(Node *root)
{
    // jika root adalah null, keluar dari fungsi
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// fungsi rekursif untuk menampilkan tree secara in-order
void inOrder(Node *root)
{
    // jika root adalah null, keluar dari fungsi
    if (root == nullptr)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// fungsi rekursif untuk menampilkan tree secara post-order
void postOrder(Node *root)
{
    // jika root adalah null, keluar dari fungsi
    if (root == nullptr)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    // membuat tree dan memasukkan data-data
    Node *root = newNode(21);
    root->left = newNode(13);
    root->right = newNode(36);
    root->left->left = newNode(8);
    root->left->right = newNode(15);
    root->right->left = newNode(26);
    root->right->right = newNode(17);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(11);
    root->left->right->left = newNode(18);
    root->right->right->right = newNode(4);

    // menampilkan tree secara pre-order
    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    // menampilkan tree secara post-order
    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    // menampilkan tree secara in-order
    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}
