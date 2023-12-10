//Write a function to print Pascal triangle of given number of rows. 
#include<stdio.h>
int fact(int);
int combination(int,int);
void pascal_triangle(int);

int main()
{
    pascal_triangle(5);
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

void pascal_triangle(int number_of_rows)
{
    int fact=1,k=0,count=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && (k==0))
            {
                printf("%3d",combination(i-1,count-1));
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
}
