<<<<<<< HEAD
/*
ADT : Abstract Data Type
Follows LIFO
operations:
1.push(data)
2.pop()
3.top()
4.IsEmpty()
5.IsFull()
*/
#include<stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;
void push(int x)
{
    if(top==MAX_SIZE-1)
    printf("\nStack is full");
    else
    A[++top]=x;
}
void pop()
{
    if(top==-1)
    {
        printf("\nstack is empty");
        return;
    }
    top--;  
}
int Top(){return A[top];}

void print()
{
    printf("Stack: ");
    for(int i=0;i<=top;i++)
    printf("%d ",A[i]);
    printf("\n");
}

int main()
{
    push (0);print();
    push (1);print();
    push (2);print();
    push (3);print();
    push (4);print();
    push (5);print();
    pop();print();
    pop();print();
    pop();print();
    pop();print();
    
    return 0;
=======
/*
ADT : Abstract Data Type
Follows LIFO
operations:
1.push(data)
2.pop()
3.top()
4.IsEmpty()
5.IsFull()
*/
#include<stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;
void push(int x)
{
    if(top==MAX_SIZE-1)
    printf("\nStack is full");
    else
    A[++top]=x;
}
void pop()
{
    if(top==-1)
    {
        printf("\nstack is empty");
        return;
    }
    top--;  
}
int Top(){return A[top];}

void print()
{
    printf("Stack: ");
    for(int i=0;i<=top;i++)
    printf("%d ",A[i]);
    printf("\n");
}

int main()
{
    push (0);print();
    push (1);print();
    push (2);print();
    push (3);print();
    push (4);print();
    push (5);print();
    pop();print();
    pop();print();
    pop();print();
    pop();print();
    
    return 0;
>>>>>>> f52763f2638bddc9d525298d831e7e86bb093de9
}