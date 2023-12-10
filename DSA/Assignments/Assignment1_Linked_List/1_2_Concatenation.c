/*
 Write a function to concatenate two linked lists. Given lists l1 = (2, 3, 1) and l2 = (4, 5), after return from 
concatenate(l1,l2) the list l1 should be changed to be l1 = (2, 3, 1, 4, 5). Your function should not change l2 
and should not directly link nodes from l1 to l2 (i.e. the nodes inserted into l1 should be copies of the nodes 
from l2.)
2. void concatenate(Node*& h1, Node* h2 );
 //
 // Precondition: h1 and h2 are head pointers of linked lists.
 // The lists may be empty or non-empty.
 //
 // Postcondition: A copy of list h2 is concatenated (added to the end)
 // of list h1. List h2 should be unchanged by the function.
 // NOTE: The nodes added to the list h1 must be copies of the
 // nodes in list h2.

*/

#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node* next;
};
void pushBack(node*& HEAD,int x)
{

    if (HEAD == NULL)
    {
        HEAD=(node*)malloc(sizeof(node));
        (HEAD)->next=NULL;
        (HEAD)->data=x;
        return;
    }
    else
    {
        node* temp=HEAD;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=(node*)malloc(sizeof(node));
        temp=temp->next;
        temp->next=NULL;
        temp->data=x;
        return;
    }
    
}
void print(node* &HEAD)
{
    node *temp=HEAD;
    if(HEAD==NULL)
    {
        printf("\nList is empty");
        return;
    }
    printf("\nList is: ");
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}

void concatenate(struct node* &h1, struct node* h2) {
if (h1 == NULL) {
h1 = h2; // if h1 is empty, simply point it to h2
return;
}

 struct node* curr = h1;

while (curr->next != NULL) {
curr = curr->next; // move to the last node of h1
}

while (h2 != NULL) {
// create a copy of the node in h2
struct node* newnode = (struct node*) malloc(sizeof(struct node));
newnode->data = h2->data;
newnode->next = NULL;
curr->next = newnode; // add the copied node to the end of h1
curr = curr->next; // move to the last node of h1
h2 = h2->next; // move to the next node of h2
}
}

int main()
{
    node *l1=NULL,*l2=NULL;
    int a1[3]={3,2,1};
    int a2[2]={4,5};
    for(int i=0;i<=2;i++)
    {
        pushBack(l1,a1[i]);
        print(l1);
    }
    for(int i=0;i<=1;i++)
    {
        pushBack(l2,a2[i]);
        print(l2);
    }

    concatenate(l1,l2);
    print(l1);
    return 0;
}
