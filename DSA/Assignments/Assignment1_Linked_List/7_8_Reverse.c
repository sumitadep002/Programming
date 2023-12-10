
/*
Write a function to reverse the nodes in a linked list. Your function should have time complexity O(n), where 
n is the length of the list. You should create no new nodes.
8. void reverse(Node*& head_ptr);
 //
 // Precondition: head_ptr is the head pointer of a linked list.
 // The list may be empty or non-empty.
 //
 // Postcondition: head_ptr points to the list of Nodes in reverse
 // order.
 */
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    node *next;
};
typedef struct node node;
void pushBack(node *&, int);
void reverse(node*&);
void print(node *&);

int main()
{
    node *list=NULL;
    int a[4]={4,3,84,80};
    for(int i=0;i<4;i++)
    pushBack(list,a[i]);
    print(list);
    reverse(list);
    print(list);

    return 0;
}
void reverse(node* &HEAD)
{
    if(HEAD==NULL)
    return;
    struct node* prev = NULL;
    struct node* current = HEAD;
    struct node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    HEAD = prev;
}
void pushBack(node *&HEAD, int x)
{
    node *temp = HEAD;

    if (HEAD == NULL)
    {
        HEAD = (node *)malloc(sizeof(node));
        (HEAD)->next = NULL;
        (HEAD)->data = x;
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = (node *)malloc(sizeof(node));
        temp = temp->next;
        temp->next = NULL;
        temp->data = x;

        return;
    }
}
void print(node *&HEAD)
{
    node *temp = HEAD;
    printf("\nList is: ");
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}