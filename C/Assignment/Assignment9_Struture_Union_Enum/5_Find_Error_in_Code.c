/*
 Whats wrong in the following code, suggest a fix for this.
struct A
{
int x;
char *str; // (or) char str[20];
};
struct A a1 = { 101, “abc” } , a2; HERE we can not assign string to structure's internal string member
a1.x=10;
a1.str=”hello”; //works?
scanf(“%d%s”,&a1.x,a1.str); //works?
a2 = a1; //shallow copy or deep copy?
What if str is declared as an array instead of pointer, i.e. char 
str[20]
*/
#include<stdio.h>


int main()
{
    struct A{
int x;
char str[20];
};
struct A a1 = {101},a2;
printf("enter the string in str ");
gets(a1.str);

    return 0;
}
