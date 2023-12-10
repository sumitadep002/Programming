
char*	str_cpy(char *dest, const char *src)
{
int i=0;
while(src[i]!='\0')
{
dest[i]=src[i];
i++;
}
dest[i] = '\0';
}

int	str_len(const char* str)
{
int length=0;
for(;*str!=(char)0;str++,length++);
return length;
}

#include<stdio.h>
int main()
{
char string1[100];
char string2[100];

printf("Enter the string1: ");
fgets(string1,100,stdin);
string1[str_len(string1)-1];


printf("Enter the string2: ");
fgets(string2,100,stdin);
string2[str_len(string2)-1];

str_cpy(string1,string2);

printf("%s",string1);

return 0;
}
