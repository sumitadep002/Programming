#include<stdio.h>
int fact (int n);
int main()
{
    int n;
    printf("Enter the number to get it's factorial\n");
    scanf("%d", &n);

 

    int result = fact(n);
    printf("Result is %d\n", result);
    return 0;
}

int fact(int n)
{
if(n==1||n==0)
return 1;

return (n*fact(n-1));

}
