/*
1. Write a program to accept marks of five subjects, calculate its total and average.
*/
#include<stdio.h>
int main()
{
    int marks[5],average=0,total=0;
    printf("enter the marks for subjects: ");
    for(int i=0;i<5;i++)
    {
        printf("\nmarks in subject[%d] ",i);
        scanf("%d",&marks[i]);
        total = total + marks[i];
    }
    printf("\ntotal %d & average= %d\n",total,total/5);
    return 0;
}
