#include<stdio.h>
#define SQUARE(a) (a)*(a)
int main()
{
printf("%d\n",SQUARE(3));
int x=3;
printf("%d\n",SQUARE(++x));
return 0;
}
