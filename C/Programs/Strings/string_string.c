
int   str_len(const char* str);
char* string_string(char *str, const char *substr);
#include<stdio.h>
int main()
{
char string1[100];
char string2[100];

printf("Enter the string1: ");
fgets(string1,100,stdin);
string1[str_len(string1)-2]='\0';

printf("Search for: ");
fgets(string2,100,stdin);
string2[str_len(string2)-2]='\0';

printf("%s",string_string(string1,string2));



return 0;
}



int	str_len(const char* str)
{
int length=0;
for(;*str!='\0';str++,length++);
return length;
}



char* string_string(char *str, const char *substr) {

	int flag = 0, j = 0, i = 0, length_of_key = 0;

	length_of_key = str_len(substr);
	


	flag = 0;

	for (i = 0; str[i] != '\0'; i++) {

		for (j = 0; j < length_of_key; j++) {
			if (str[i + j] != substr[j])
			break;
			else
			flag++;
		}
		if (flag == length_of_key)
			return (&str[i]);

	}

	return NULL;


}
