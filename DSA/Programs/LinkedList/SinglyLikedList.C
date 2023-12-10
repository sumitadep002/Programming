
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    node *next;
};
typedef struct node node;
void reverse(node*&);
int size(node *&);
void sortAscending(node*&);
void pushFront(node *&, int);
void pushAt(node *&, int, int);
void pushBack(node *&, int);
void delFront(node *&);
void delEnd(node *&);
void delAt(node *&, int);
void print(node *&);
int getValue(node*&,int);
int main()
{
    node *list = NULL;
    int n;
    int temp;
    int position;
    int choice;
    do
    {
        fflush(stdin);
        printf("\n1.Insert an element at front ");
        printf("\n2.Insert an element at end ");
        printf("\n3.Insert an element at nth position ");
        printf("\n4.Remove an element from front ");
        printf("\n5.Remove an element from end ");
        printf("\n6.Remove an element from nth position ");
        printf("\n7.Show all elements of linked List ");
        printf("\n8.print the size of list ");
        printf("\n9.Quit ");

        printf("\n\nEnter you choice ");
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice)
        {
        case 1:
            printf("\nenter number: ");
            scanf("%d", &n);

            pushFront(list, n);
            break;
        case 2:
            printf("\nenter number: ");
            scanf("%d", &n);
            pushBack(list, n);
            break;
        case 3:
            printf("\nenter number and position: ");
            scanf("%d %d", &n, &position);
            pushAt(list, n, position);
            break;
        case 4:
            delFront(list);
            break;
        case 5:
            delEnd(list);
            break;
        case 6:
            printf("\nenter position: ");
            scanf("%d", &position);
            delAt(list, position);
            break;
        case 7:
            print(list);
            break;
        case 8:
            printf("\nsize of list: %d",size(list));
            break;
        case 9:
            printf("\nOK\nprogram will be terminated");
            break;

        default:
            break;
        }
    } while (choice != 9);

    return 0;
}
void pushFront(node *&HEAD, int x)
{
    node *temp = NULL;
    temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = HEAD;
    HEAD = temp;
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
void pushAt(node *&HEAD, int x, int pos = 1)
{
    node *trav, *temp;

    if (pos == 1)
    {
        pushFront(HEAD, x);
    }
    else
    {

        trav = HEAD;
        temp = (node *)malloc(sizeof(node));
        temp->data = x;

        for (int i = 1; i < pos - 1; i++)
        {
            trav = trav->next;
        }
        temp->next = trav->next;
        trav->next = temp;
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
void delFront(node *&HEAD)
{

    if (HEAD == NULL)
    {
        printf("\nNothing to delete");
        return;
    }
    else
    {
        node *temp = HEAD;
        printf("\n%d is removed", (temp)->data);
        HEAD = (temp)->next;
        free(temp);
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
void delAt(node *&HEAD, int pos)
{
    if (pos == 1)
    {
        delFront(HEAD);
    }
    else
    {

        node *garbage, *current;
        current = HEAD;

        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }
        garbage = current->next;
        printf("\n%d is removed", garbage->data);
        current->next = garbage->next;
        free(garbage);
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
int getValue(node* &HEAD,int pos)
{
    int value;
    
    if (pos == 1)
    {
        delFront(HEAD);
    }
    else
    {

        node *locator, *current;
        current = HEAD;

        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }
        locator = current->next;
        value = locator->data;
    }
    return value;
}

