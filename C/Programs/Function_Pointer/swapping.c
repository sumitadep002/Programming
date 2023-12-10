#include<stdio.h>

void (*fp)(int*,int*);
void swap1(int*,int*);
void swap2(int*,int*);

int main()
{
int a=5,b=6;



printf("Before swapping: a=%d, b=%d\n",a,b);

printf("Using third variable:\n");
fp=swap1;
fp(&a,&b);
printf("After swapping: a=%d, b=%d\n",a,b);

fp=swap2;
fp(&a,&b);
printf("Without Using third variable:\n");
printf("After swapping: a=%d, b=%d\n",a,b);

fp=swap3;
fp(&a,&b);
printf("Without Using third variable:\n");
printf("After swapping: a=%d, b=%d\n",a,b);


return 0;
}


void swap1(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

void swap2(int *a,int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}

void swap3(int *a,int *b)
{
*a=(*a)*(*b);
*b=(*a)/(*b);
*a=(*a)/(*b);
}
