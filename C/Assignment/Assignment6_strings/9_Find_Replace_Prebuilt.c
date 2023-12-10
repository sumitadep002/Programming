/*
Write a function to find and replace a string using library functions [strstr(), strncpy(), strlen(),
strcat(), strcpy(), etc.].
Input :
Source : This is test time
Find
: is
Replace: was
Output:
Thwas was test time
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void find_replace(char *source,const char *find, const char *replace);
int main()
{
	char string[1000];
	char find[100];
	char replace[100];

	printf("string: ");
	fgets(string,1000,stdin);
	string[strlen(string)-1]='\0';

	printf("Find: ");
	fgets(find,100,stdin);
	find[strlen(find)-1]='\0';
	
	printf("Replace: ");
	fgets(replace,100,stdin);
	replace[strlen(replace)-1]='\0';
	
	find_replace(string,find,replace);
	
	printf("%s\n",string);
    
    
return 0;
}


void find_replace(char *source, const char *find, const char *replace) {
    int find_len = strlen(find);
    int replace_len = strlen(replace);
    char *pos = strstr(source, find);
    
    while (pos != NULL) {
        if (find_len == replace_len) {
            strncpy(pos, replace, replace_len);
        } else {
            char temp[500];
            strncpy(temp, source, (int)(pos - source));
            temp[pos - source] = '\0';
            strncat(temp, replace, replace_len);
            strncat(temp, pos + find_len, strlen(source) - (pos - source) - find_len + 1);
            strcpy(source, temp);
        }
        
        pos = strstr(source, find);
    }
}



