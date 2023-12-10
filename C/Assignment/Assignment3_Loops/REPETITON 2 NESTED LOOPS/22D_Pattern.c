/*
Print following patterns
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d ",6-j);
        }
        printf("\n");
    }
    return 0;
}