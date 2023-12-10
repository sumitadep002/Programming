#include<stdio.h>
int pelindrome(char *a,char *b);
int main()
{
char str[20];
int l=0;
printf("Enter the string: ");
scanf("%s",str);

while(str[l]!='\0')
l++;

if(pelindrome(str,str+l-1))
printf("%s is pelindrome\n",str);
else
printf("%s is not pelindrome\n",str);

return 0;
}

int pelindrome(char *a,char *b)
{
if(a>=b)
return 1;
else if((*a)!=(*b))
return 0;

return pelindrome(a+1,b-1);
}
