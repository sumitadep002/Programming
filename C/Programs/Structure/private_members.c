#include <stdio.h>

struct strucutre_private
{
int a,b,c,d;

int sum(void)
{
return (a+b+c+d);
}

};
struct strucutre_private s;


int main()
{
s.a=6;
s.b=6;
s.c=6;
s.d=6;
printf("%d\n",s.sum());
return 0;
}
