#include <stdio.h> 
#include <stdlib.h> 

struct node 
{ 
     int data; 
     struct node* left; 
     struct node* right; 
}; 

struct node* newNode(int data) 
{ 
     struct node* node = (struct node*)malloc(sizeof(struct node)); 
     node->data = data; 
     node->left = NULL; 
     node->right = NULL; 
  
     return(node); 
}

void postorder(struct node* node) 
{ 
     if (node == NULL) 
        return; 
  
     // first recur on left subtree 
     postorder(node->left); 
  
     // then recur on right subtree 
     postorder(node->right); 
  
     // now deal with the node 
     printf("%d ", node->data); 
} 

int main() 
{ 
     struct node *root  = newNode(1); 
     root->left = newNode(2); 
     root->right = newNode(3); 
     root->left->left = newNode(4); 
     root->left->right = newNode(5);  
  
     printf("\nPostorder traversal of binary tree is \n"); 
     postorder(root); 
   
     return 0; 
} 

