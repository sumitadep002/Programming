/*
 Print following patterns
A B C D
B C D
C D
D
*/
#include<stdio.h>
int main()
{
    for(int i=4,k=65;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf(" %c ",k++);
        }
        printf("\n");
        k=70-i;
    }
    return 0;
}