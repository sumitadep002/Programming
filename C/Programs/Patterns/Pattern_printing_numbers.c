/*
Write a program in below manner
input: 5
output: 1,22,333,2222,55555,2222222
or
output: 2,33,222,5555,22222,777777,2222222,99999999
*/
#include<stdio.h>
long int convert(int i);
int main()
{
int n;
printf("Enter the number: ");
scanf("%d",&n);

long int num = 1;

for(int i=2;i<=n;i++)
{
if(i%2!=0)
printf("%ld,",convert(i) * i);
else
printf("%ld,",convert(i) * 2);
}
return 0;
}

long int convert(int i)
{
long int num = 1;

while(i>2)
{
num = num*10+1;
i--;
}

return num;
}
