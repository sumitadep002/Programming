#include<stdio.h>

//str will take x as argument and #x will convert it into the string literal
#define str(x) #x
#define Xstr(x) str(x)
#define oper multiply 
int main()
{
char *opername = Xstr (oper);
printf("%s\n",opername);
return 0;
}
