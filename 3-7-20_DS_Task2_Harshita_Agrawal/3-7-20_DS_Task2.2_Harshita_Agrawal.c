#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *new = (struct node *)malloc(sizeof(struct node));
  new->data = item;
  new->left = new->right = NULL;
  return new;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    printf("%d -> ", root->data);

    // Traverse right
    inorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *node, int data) {
  // Return a new node if the tree is empty
  if (node == NULL) {
    return newNode(data);
  }

  // Traverse to the right place and insert the node
  if (data < node->data)
    node->left = insert(node->left, data);
  else
    node->right = insert(node->right, data);

  return node;
}

int main() {
  struct node *root = NULL;
  root = insert(root, 7);
  root = insert(root, 2);
  root = insert(root, 1);
  root = insert(root, 5);
  root = insert(root, 6);
  root = insert(root, 9);
  root = insert(root, 13);
  root = insert(root, 3);

  printf("Inorder traversal: ");
  inorder(root);
}