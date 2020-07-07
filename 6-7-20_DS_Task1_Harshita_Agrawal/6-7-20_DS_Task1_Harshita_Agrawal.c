#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insertAfter(struct node* prev_node, int new_data) 
{ 
    if (prev_node == NULL)  
    {  
       printf("the given previous node cannot be NULL");        
       return;   
    }   
     
    struct node* new_node =(struct node*) malloc(sizeof(struct node)); 
    new_node->data  = new_data; 
    new_node->next = prev_node->next;  
    prev_node->next = new_node; 
} 

void deleteNode(struct node *before_del)
{
    struct node *temp;
    temp = before_del->next;
    before_del->next = temp->next;
    free(temp);
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head-> data=100;
    head-> next=NULL;

    struct node *link2=(struct node *)malloc(sizeof(struct node));
    link2-> data=200;
    link2-> next=NULL;

    head-> next=link2;

    struct node *link3=(struct node *)malloc(sizeof(struct node));
    link3-> data=300;
    link3-> next=NULL;

    link2-> next=link3;

    struct node *link4=(struct node *)malloc(sizeof(struct node));
    link4-> data=400;
    link4-> next=NULL;

    link3-> next=link4;

    insertAfter(link2 , 350);
    deleteNode(link3);
   
    struct node *temp=head;

    while(temp->next!=NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("%d -> NULL ", temp -> data);
} 
