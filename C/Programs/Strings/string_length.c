
int 	str_len(const char* str)
{
int length=0;
for(;*str!=(char)0;str++,length++);
return length;
}

#include<stdio.h>
int main()
{
char string[100];

printf("Enter the string: ");
fgets(string,100,stdin);

printf("%d",str_len(string)-1);

return 0;
}
