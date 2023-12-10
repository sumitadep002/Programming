
/*
Write a function to return the median value in a sorted linked list. If the length i of the list is odd, then the 
median is the ceiling(i/2) member. For example, given the list (1, 2, 2, 5, 7, 9, 11) as input, your function 
should return the value 5. If the length of the list is even, then the median is the mean of the i/2 and (i/2)+1 
members. Thus, the median of the sorted list (2, 4, 8, 9) is (4+8)/2. Finally, define the median of an empty list 
to be 0
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    node *next;
};
typedef struct node node;
int listMedian(node*&);
void print(node*&);
void pushBack(node*&,int);
int size(node*&);
void sortAscending(node*&);
int getValue(node*&,int);
int main()
{
    node* list=NULL;
    int median;
    int a[8]={1, 2, 2, 5, 7, 9, 11};
    for(int i=0;i<7;i++)
    {
        pushBack(list,a[i]);
    }
    print(list);
    sortAscending(list);
    print(list);
    printf("\nmedian: %d",listMedian(list));
    
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
int size(node *&HEAD)
{
    int count = 0;
    node* temp = HEAD;

    while (temp != NULL) {
        temp = temp->next;
        count++;
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
int getValue(node* &HEAD,int pos)
{
    node* current = HEAD;

    for (int i = 1; i < pos; i++) {
        current = current->next;
    }
    return current->data;

}
int listMedian(node* &HEAD)
{
    int med;
    int location=(size(HEAD)/2);
    if(size(HEAD)%2!=0)
    {
    med=getValue(HEAD,location+1);
    }
    else
    {
        med=getValue(HEAD,location);
        med=med+getValue(HEAD,location+1);
    }
    return med;

}