char* str_ncat(char *s1, const char *s2,int copy_end_point);
int	str_len(const char* str);
#include<stdio.h>
int main()
{
char string1[100];
char string2[100];


printf("String1: ");
fgets(string1,100,stdin);
string1[str_len(string1)-1]='\0';

printf("String2: ");
fgets(string2,100,stdin);
string1[str_len(string2)-1]='\0';

printf("String1 + string2 = %s",str_ncat(string1,string2,5));


return 0;
}



char* str_ncat(char *s1, const char *s2,int copy_end_point) {
	int i = 0, j = 0;

	// Find the end of s1
	while (s1[i] != '\0') {
		i++;
	}

	// Copy characters from s2 to the end of s1
	while (s2[j] != '\0' && j<copy_end_point) {
		s1[i + j] = s2[j];
		j++;
	}

	// Add the null terminator at the end of the concatenated string
	s1[i + j] = '\0';
	
	return s1;
}

int	str_len(const char* str)
{
int length=0;
for(;*str!=(char)0;str++,length++);
return length;
}
