#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void find_replace(char *source,char *find, char *replace);
int main()
{
char source[] = "There are many genders present in this world, gender is nothing";
    char find[] = "genders";
    char replace[] = "identities";
    find_replace(source,find, replace);
    
    printf("%s\n",source);
    
    
return 0;
}


void find_replace(char *source,char *find, char *replace)
{
int find_len = strlen(find);
int replace_len = strlen(replace);

char *pos = strstr(source,find);

if(find_len == replace_len)
strncpy(pos,replace,replace_len);

else
{
char temp[100];
strncpy(temp,source,(int)(pos-source ));
temp[pos-source]='\0';
strncat(temp,replace,replace_len);
temp[pos-source+replace_len]='\0';
strncat(temp,pos+find_len,strlen(source)-(pos-source-find_len));

strcpy(source,temp);

}


}


