#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};
typedef struct node node;

node *HEAD;
node *TAIL;
int count = 0;
void reverse();
void reverseOrder();
void pushFront(int);
void pushAt(int, int);
void pushBack(int);
void delFront();
void delEnd();
void delAt(int);
void print();
void printReverse();
int main()
{
    HEAD = NULL;
    TAIL = NULL;
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
        printf("\n7.Reverse order of elements ");
        printf("\n8.Show all elements of nexted List ");
        printf("\n9.print linked list in reverse order ");
        printf("\n10.Quit ");

        printf("\n\nEnter you choice ");
        scanf("%d", &choice);
        printf("\nsize of nexted list %d\n", count);
        fflush(stdin);

        switch (choice)
        {
        case 1:
            printf("\nenter number: ");
            scanf("%d", &n);

            pushFront(n);
            break;
        case 2:
            printf("\nenter number: ");
            scanf("%d", &n);
            pushBack(n);
            break;
        case 3:
            printf("\nenter number and position: ");
            scanf("%d %d", &n, &position);
            pushAt(n, position);
            break;
        case 4:
            delFront();
            break;
        case 5:
            delEnd();
            break;
        case 6:
            printf("\nenter position: ");
            scanf("%d", &position);
            fflush(stdin);
            delAt(position);
            break;
        case 7:
            reverse();
            break;
        case 8:
            print();
            break;
        case 9:
            printReverse();
            break;
        case 10:
            printf("\nOK\nprogram will be terminated");
            break;

        default:
            break;
        }
    } while (choice != 10);

    return 0;
}
void pushFront(int x)
{
    if (HEAD == NULL)
    {
        HEAD = (node *)malloc(sizeof(node));
        HEAD->data = x;
        HEAD->next = NULL;
        HEAD->prev = NULL;
        TAIL = HEAD;
        count++;
    }
    else
    {
        HEAD->prev = (node *)malloc(sizeof(node));
        HEAD->prev->next=HEAD;
        HEAD = HEAD->prev;
        HEAD->data = x;
        HEAD->prev = NULL;
        count++;
    }
    
}
void pushBack(int x)
{

    if (TAIL == NULL)
    {
        TAIL = (node *)malloc(sizeof(node));
        TAIL->data = x;
        TAIL->next = NULL;
        TAIL->prev = NULL;
        HEAD = TAIL;
        count++;
    }
    else
    {
        TAIL->next = (node *)malloc(sizeof(node));
        TAIL->next->prev=TAIL;
        TAIL = TAIL->next;
        TAIL->data=x;
        TAIL->next=NULL;
        count++;
    }
    
}
void print()
{
    node *trav = HEAD;
    printf("List is: ");
    while (trav != NULL)
    {
        printf(" %d ", trav->data);
        trav = trav->next;
    }
}
void printReverse()
{
    node *temp = TAIL;
    printf("List in reverse order: ");
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->prev;
    }
}
void pushAt(int x, int pos = 1)
{
    node *trav;

    if (pos == 1)
    pushFront(x);
    else if(pos==count)
    pushBack(x);
    else
    {
        trav = HEAD;
        for (int i = 1; i < pos; i++)
        {
            trav = trav->next;
        }
        node *new_node=(node*)malloc(sizeof(node));
        new_node->next=trav;
        new_node->prev=trav->prev;
        new_node->prev->next=trav;
        new_node->next->prev=trav;
        count++;
    }
}
void delFront()
{
    if (HEAD == NULL)
    {
        printf("\nNothing to delete");
        count = 0;
    }
    else if (HEAD->next == NULL)
    {
        printf("\n%d is removed", HEAD->data);
        free(HEAD);
        HEAD = NULL;
        TAIL = NULL;
        count--;
    }
    else
    {
        printf("\n%d is removed", HEAD->data);
        HEAD = HEAD->next;
        free(HEAD->prev);
        HEAD->prev = NULL;
        count--;
    }
}
void delEnd()
{
    if (TAIL == NULL)
    {
        printf("\nNothing to delete");
        count = 0;
    }
    else if (TAIL->prev == NULL)
    {
        printf("\n%d is removed", TAIL->data);
        free(HEAD);
        free(TAIL);
        HEAD = NULL;
        TAIL = NULL;
    }
    else
    {
        printf("\n%d is removed", TAIL->data);
        TAIL = TAIL->prev;
        free(TAIL->next);
        TAIL->next = NULL;        
    }
    count--;
}
void delAt(int pos)
{
    if (pos == 1)
        delFront();
    else if(pos == count)
        delEnd();
    else
    {

        node *current = HEAD;

        for (int i = 1; i < pos ; i++)
            current = current->next;

        current->prev->next=current->next;
        current->next->prev=current->prev;
        
        count--;
    }
    
}
void reverse()
{
    int iteration = 1;
    int number_comparison = 1;
    int temp = 0;
    node *temp_ptr;
    node *trav;
    trav = HEAD;

    while (iteration < count)
    {
        trav = HEAD;
        while (number_comparison <= count - 1)
        {
            temp = trav->data;

            temp_ptr = trav->next;

            trav->data = temp_ptr->data;
            temp_ptr->data = temp;
            trav = trav->next;
            number_comparison++;
        }
        iteration++;
        number_comparison = iteration;
    }
}

void reverseOrder()
{
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
