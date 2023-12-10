#include <stdio.h>

/*
Write a function to find and replace a string without using library functions.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void str_cat(char *s1,const char *s2);
void	find_replace(char *source, const char *find, const char *replace);
void	str_ncpy(char *s1, const char *s2,int copy_end_point);
char*	str_ncat(char *s1, const char *s2,int copy_end_point);
int	str_len(const char* str);
char*	str_str(char *str, const char *substr);
char*	str_cpy(char *dest, const char *src);

int main() {
	char string[1000];
	char find[100];
	char replace[100];

	printf("string: ");
	fgets(string,1000,stdin);
	string[str_len(string)-1]='\0';

	printf("Find: ");
	fgets(find,100,stdin);
	find[str_len(find)-1]='\0';
	
	printf("Replace: ");
	fgets(replace,100,stdin);
	replace[str_len(replace)-1]='\0';
	
	find_replace(string,find,replace);
	
	printf("%s\n",string);
	
    
return 0;
}

void find_replace(char *source, const char *find, const char *replace) {

	int source_len = str_len(source);
    int find_len = str_len(find);
    int replace_len = str_len(replace);
    
    
    
    char *pos = str_str(source, find);
    char temp[1000];
    while (pos != NULL) {
    
        if (find_len == replace_len) {
            for(int i=0;i<replace_len;i++)
            pos[i]=replace[i];
        } else {
            
            str_ncpy(temp, source, (int)(pos - source));
            str_ncat(temp, replace,replace_len);
            str_ncat(temp, pos + find_len, str_len(source) - (pos - source) - find_len + 1);
            str_cpy(source, temp);
        }
        
        pos = str_str(pos+find_len, find);
    }
    
    
}

char* str_str(char *str, const char *substr) {

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
void str_ncpy(char *s1, const char *s2,int copy_end_point) {

	int i = 0;
	while (s2[i] != '\0' && i<copy_end_point) {
		s1[i] = s2[i];
		i++;
	}
	s1[copy_end_point] = '\0';
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
	s1[i + copy_end_point] = '\0';
	
	return s1;
}

int	str_len(const char* str)
{
int length=0;
for(length=0;str[length]!='\0';length++);
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


void str_cat(char *s1,const char *s2) {
	int i = 0, j = 0;

	// Find the end of s1
	while (s1[i] != '\0') {
		i++;
	}

	// Copy characters from s2 to the end of s1
	while (s2[j] != '\0' ) {
		s1[i + j] = s2[j];
		j++;
	}

	// Add the null terminator at the end of the concatenated string
	s1[i + j +1] = '\0';
}
