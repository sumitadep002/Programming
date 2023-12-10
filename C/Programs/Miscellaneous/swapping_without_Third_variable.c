#include<stdio.h>
int main()
{
int a=10,b=15;

printf("a %d & b %d\n",a,b);

a=a+b;	//a=5+7=12
b=a-b;	//b=5+7-7=5	
a=a-b;

printf("a %d & b %d",a,b);


return 0;
}
