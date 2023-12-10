/*
2
33
222
5555
22222
777777
2222222
99999999
*/

#include<stdio.h>
int main()
{
for(int i=0;i<8;i++)
{
for(int j=0;j<=i;j++)
{
if(i%2 == 0)
printf("2");
else
printf("%d",i+2);
}
printf(",");
}
return 0;
}
