/*
Write a function to remove all occurrences of any character in string1 from the string2
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void remove_duplicate(char *string1, char *string2);

int main() {
    char string2[] = "sumit";
    char string1[] = "123sumit456sumit789";
    printf("Before: %s\n", string1);
    remove_duplicate(string1, string2);
    printf("After: %s\n", string1);
    return 0;
}

void remove_duplicate(char *string1, char *string2)
{

int str2_length = 0;
while(string2[str2_length]!='\0')
str2_length++;

int i=0,j=0;

while(string1[i]!='\0')
{
for(j=0;j<str2_length;j++)
{
if(string2[j]!=string1[j+i])
break;
}

if((j == str2_length)||(j+1 == str2_length))
{
for(int k=0;k<str2_length;k++)
string1[i+k] = 'x';
}

i++;
}


int q=0,p=0;
for(p=0,q=0;string1[p]!='\0';p++)
{
if(string1[p]!='x')
{
string1[q] = string1[p];
q++;
}
}

string1[q] = '\0';

}

