
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    node *next;
};
typedef struct node node;
void reverse(node*&);
void pushBack(node *&, int);
void print(node *&);
int main()
{
    node* l=NULL;
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    pushBack(l,a[i]);

    //print(l);

    reverse(l);
    print(l);
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

void reverse(node* &p)
{
    if(p==NULL)
    {
        return ;
    }
    reverse(p->next);
    p->next=p;
}

