#include <stdio.h>
#include <string.h>

char *strrev(char *str);


int main() {
   	char string1[100] = "Engine";
	char string2[100] ;
	
	//use of strlen
	printf("Length of entered string is %d\n",(int)strlen(string1));
	
	//use of str_cpy
	printf("string2 content: %s\n",strcpy(string2,string1));
	
	//use of strncpy
	printf("string2 content: %s\n",strncpy(string2,string1,5));
	
	//strrev
	printf("string1 content: %s\n",strrev(string1));
	
	
	char name[]="Sumit";
	char surname[]="Adep";
	char NAME[]="SUMIT";
	/*strcat
	printf("string2 content: %s\n",strcat(name,surname));
	*/
	
	char str_cat1[]="123456";
	char str_cat2[]="789ABCD";
	
	//strncat
	printf("string2 content: %s\n",strncat(str_cat1,str_cat2,5));
	
	//strstr
	//will return NULL if there isn't any character in string
	//or will return the address of that string
	printf("name content: %s\n",strstr(name,"Sumit"));
	
	//strcmp
	//will give 0 if both are same, -1 if first string is greater or -1 if first string is smaller
	printf("comparison of name and surname: %d\n",strcmp(name,surname));
	
	//stricmp
	printf("comparison of name and NAME: %d\n",strcmp(name,NAME));
	
	//strchr
	printf("character u in name: %s\n",strchr(name,'u'));
	
	
    return 0;
}

char *strrev(char *str){
    char c, *front, *back;

    if(!str || !*str)
        return str;
    for(front=str,back=str+strlen(str)-1;front < back;front++,back--){
        c=*front;*front=*back;*back=c;
    }
    return str;
}
