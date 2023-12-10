#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node* next;
};
typedef struct node node;

void	pushBack(node** HEAD,int x);
int	print(node** HEAD);
int	Delete_List(node** HEAD);
int	Remove_Duplicate(node** HEAD);

int main()
{
    node *HEAD=NULL;
    char option;
    int data;
    printf("Enter your option 'e' or 'E'to exit and i <data> to insert data:\n");
    do
    {
    scanf("%c %d",&option,&data);
    if(option == 'i' || option == 'I')
    pushBack(&HEAD,data);
    }while(option!='e' && option!='E');
    
    printf("\nList Without Duplicates : ");
    
    
    
    if(Remove_Duplicate(&HEAD)==-1)
    printf("List is empty\n");
    
    if(print(&HEAD) == -1)
    printf("\nList is empty\n");
    
    
    Delete_List(&HEAD);
    return 0;
}

int Delete_List(node** HEAD)
{
if(*HEAD == NULL)
return -1;

node* temp;

while((*HEAD) != NULL)
{
temp = *HEAD;
(*HEAD) = (*HEAD) -> next;
free(temp);
}

}
void pushBack(node** HEAD,int x)
{

    if ((*HEAD) == NULL)
    {
        (*HEAD)=(node*)malloc(sizeof(node));
        (*HEAD)->next=NULL;
        (*HEAD)->data=x;
        return;
    }
    else
    {
        node* temp=*HEAD;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=(node*)malloc(sizeof(node));
        temp=temp->next;
        temp->next=NULL;
        temp->data=x;
        return;
    }
    
}
int print(node** HEAD)
{
    node *temp=*HEAD;
    if(temp==NULL)
    return -1;
    
    
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}

int Remove_Duplicate(node** HEAD)
{

if(*HEAD == NULL)
return -1;

node* temp_HEAD = *HEAD;
node* current_node = *HEAD;
node* next_node = current_node->next;
int data = current_node->data;
while(next_node!=NULL)
{
while(next_node!=NULL)
{
if(data == next_node->data)
{
printf("\nMatch Found");
current_node->next = next_node->next;
free(next_node);
next_node = current_node->next;
}
else
{
current_node = next_node;
next_node = current_node->next;
}
}

temp_HEAD = temp_HEAD->next;
current_node = temp_HEAD;
next_node = current_node->next;
data = current_node->data;
}
return 1;
}
