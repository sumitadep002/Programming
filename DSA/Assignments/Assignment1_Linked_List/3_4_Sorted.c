/*
rite a function to insert a number into a sorted linked list. Assume the list is sorted from smallest to largest 
value. After insertion, the list should still be sorted. Given the list l1 = (3, 17, 18, 27) and the value 20, on 
return l1 be the list (3, 17, 18, 20, 27)
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    node *next;
};
typedef struct node node;
void insertInOrder(node*&,int);
int size(node *&);
void pushBack(node*&, int);
void print(node*&);
void sortAscending(node*&);

int main()
{
    int a[4]={48,24,15,75};
    node *list=NULL;
    for(int i=0;i<4;i++)    
    pushBack(list,a[i]);
    print(list);
    sortAscending(list);
    print(list);
    insertInOrder(list,3);
    print(list);
    return 0;
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

void delEnd(node *&HEAD)
{
    node *temp = HEAD;
    if (temp == NULL)
    {
        printf("\nNothing to delete");
        return;
    }

    else
    {
        node *trav=NULL,*prev=NULL;
        while (temp->next != NULL)
        {
            prev=temp;
            temp = temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
}
int size(node *&HEAD)
{
    int count = 0;
    node *temp = HEAD;
    if(temp->next==NULL)
    count++;
    else
    {
    
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    }
    
    return count;
}
void sortAscending(node* &HEAD)
{
    int count=size(HEAD);
    int iteration = 1;
    int number_comparison = 1;
    int temp = 0;
    node *temp_ptr;
    node *trav=HEAD;


    while (iteration < count)
    {
        trav = HEAD;
        while (number_comparison <= count-1)
        {
            if(trav->data > (trav->next->data))
            {
                temp=trav->data;
                trav->data=trav->next->data;
                trav->next->data=temp;
            }
            trav=trav->next;
            number_comparison++;
        }
        iteration++;
        number_comparison=iteration;
    }
}
void insertInOrder(node* &HEAD,int x)
{
    pushBack(HEAD,x);
    sortAscending(HEAD);
}