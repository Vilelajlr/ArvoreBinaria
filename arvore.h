#ifndef BST_H
#define BST_H

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data);
struct Node* insert(struct Node* node, int data);
void inOrder(struct Node* root);
struct Node* deleteNode(struct Node* root, int data);

#endif
