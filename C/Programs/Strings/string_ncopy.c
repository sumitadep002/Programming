char*	str_cpy(char *dest, const char *src);
void str_ncpy(char *s1, const char *s2,int copy_end_point);
void str_ncpy(char *s1, const char *s2,int copy_end_point);
int	str_len(const char* str);
#include<stdio.h>
int main()
{
char string1[100];
char string2[100];


printf("Enter the string2: ");
fgets(string2,100,stdin);
string2[str_len(string2)-1];

str_ncpy(string1,string2,8);

printf("%s",string1);

return 0;
}



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

void str_ncpy(char *s1, const char *s2,int copy_end_point) {

	int i = 0;
	while (s2[i] != '\0' && i<copy_end_point) {
		s1[i] = s2[i];
		i++;
	}
	s1[copy_end_point] = '\0';
}

int	str_len(const char* str)
{
int length=0;
for(;*str!=(char)0;str++,length++);
return length;
}
