#include<stdio.h>
#include<stdlib.h>
int a;
short int b;
long int c;
long long int d;
float e;
double f;
long double g;
int main()
{
printf("int %ld\n",sizeof(a));
printf("short in int %ld\n",sizeof(b));
printf("long int %ld\n",sizeof(c));
printf("long long int %ld\n",sizeof(d));
printf("float %ld\n",sizeof(e));
printf("double %ld\n",sizeof(f));
printf("long double %ld\n",sizeof(g));

return 0;
}
