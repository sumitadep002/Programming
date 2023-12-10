#include<stdio.h>
#include<stdarg.h>
int average(int num,...);
int main()
{
printf("%d",average(4,1,2,3,4));
return 0;
}

int average(int num,...)
{
int avg = 0;
va_list list;

va_start(list,num);

for(int i=0;i<num;i++)
{
avg+=va_arg(list,int);
}

va_end(list);
return avg;
}
