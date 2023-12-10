//program to demostrate  call by value and call by reference
#include<stdio.h>
void PrintNumber(int a,int b)
{
    printf("a is %d and b is %d",a,b);
}
void Manipulate_var(int *a,int *b)
{
    *a=5;
    *b=6;
}
int main()
{

    int a=1,b=2;
    PrintNumber(a,b);
    Manipulate_var(&a,&b);
    printf("\na is %d and b is %d",a,b);

    return 0;
}