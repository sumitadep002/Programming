/*
 Print Pascal Triangle
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

each term is bionomial coefficient fact(n) / (fact(r) * (n-r))
*/
#include<stdio.h>
int fact(int);
int combination(int,int);
int main()
{
    int fact=1,k=0,count=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && (k==0))
            {
                printf(" %d ",combination(i-1,count-1));
                k=1;
                count++;
            }
            else
            {
            printf("   ");
            k=0;
            }
        }
        count=1;
        printf("\n");
        
    }
    return 0;
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    f=f*i;
    return  f;
}
int combination(int n,int r)
{
    return(fact(n)/(fact(n-r)*fact(r)));
}
