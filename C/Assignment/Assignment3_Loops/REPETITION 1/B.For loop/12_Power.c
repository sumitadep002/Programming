/*
Write a program to accept integer values of base and index and calculate power of base to
index.
Input: base: 2 index: 5
Output: 32
Input: base: 8 index: 3
Output: 512
*/

#include<stdio.h>
int main()
{
    int base,index,temp_base=1;
    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the index: ");
    scanf("%d",&index);

    for(int i=1;i<=index;i++)
    {
        temp_base = temp_base*base;
    }
    printf("%d\n",temp_base);

    return 0;
}
