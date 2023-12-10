#include <stdio.h>

void 	str_ncpy(char *s1, char *s2,int copy_end_point);
void 	str_ncat(char *s1, char *s2,int copy_end_point);
int 	str_len(const char* str);
char*	str_cpy(char *dest, const char *src);
char*	str_cat(char *dest, const char *src);
int	str_cmp(const char *str1, const char *str2);
int	str_icmp(const char *str1, const char *str2);
char* 	str_rev(char* str);
char* 	str_char(const char *str, int ch);
const char* 	str_str(const char *str, const char *substr);

int main() {
	char string1[100] = "Engine";
	char string2[100] = "Jet";
	/*printf("Enter a string: ");
	scanf("%s",string1);
	
	//use of str_len
	printf("Length of entered string is %d\n",str_len(string1));
	
	//use of str_cpy
	str_cpy(string2,string1);
	printf("string2 content: %s\n",string2);
	
	//use of str_ncpy
	str_ncpy(string2,string1,5);
	printf("string2 content: %s\n",string2);
	
	//strrev
	str_rev(string2);
	printf("string2 content: %s\n",string2);
	
	//str_cat
	str_cat(string2,string1);
	printf("string2 content: %s\n",string2);
	
	//str_ncat
	str_ncat(string2,string1,3);
	printf("string2 content: %s\n",string2);
	
	//str_str
	printf("string2 content: %s\n",str_str(string1,"gine"));*/
	
	//
	
	
	
    return 0;
}


int 	str_len(const char* str)
{
int length=0;
for(;*str!=(char)0;str++,length++);
return length;
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

char*	str_cat(char *dest, const char *src)
{
    int i = 0, j = 0;

    // Find the end of dest
    while (dest[i] != '\0') {
        i++;
    }

    // Copy characters from src to the end of dest
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }

    // Add the null terminator at the end of the concatenated string
    dest[i + j] = '\0';
}



int str_cmp(const char str1,const char str2)
{

int i=0,j=0,temp=0;
while(str1[i++]!='\0')
{
if(str1[i] - str2[i] > 0)
return (str[i] - str2[i]);
} 
while(str1[j++]!='\0');

if(j == i)
return 0;
else if( j>i )
return (int)str2[j+1];
else if( j<i )
return (int)str2[i+1];


}

int	str_icmp(const char *str1, const char *str2)
{

int i=0,j=0,temp=0;
while(str1[i++]!='\0')
{
if(str1[i] - str2[i] > 0 && (str1[i] - str2[i] != 32 || str1[i] - str2[i] != -32) )
return (str[i] - str2[i]);
} 
while(str1[j++]!='\0');

if(j == i && (str1[i] - str2[i] != 32 || str1[i] - str2[i] != -32))
return 0;
else if( j>i )
return (int)str2[j+1];
else if( j<i )
return (int)str2[i+1];



}

char* 	str_rev(char* str)
{
int strLen = str_len(str);
char temp;
for(int i=0;i<=strLen/2;i++)	
{
temp = str[strLen - 1 - i];
str[strLen - 1 - i] = str[i];
str[i] = temp;
}


return str;
}


const char* str_str(const char *str, const char *substr) {

	int flag = 0, j = 0, i = 0, length_of_key = 0;

	for (; substr[length_of_key] != '\0'; length_of_key++)
		;

	flag = 0;

	for (i = 0; str[i] != '\0'; i++) {

		for (j = 0; j < length_of_key; j++) {
			if (str[i + j] == substr[j])
				flag++;
			else
				break;
		}
		if (flag == length_of_key)
			return (str + (char) i);

	}

	return NULL;


}


void str_ncat(char *s1, char *s2,int copy_end_point) {
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
}

void str_ncpy(char *s1, char *s2,int copy_end_point) {

	int i = 0;
	while (s2[i] != '\0' && i<copy_end_point) {
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}
