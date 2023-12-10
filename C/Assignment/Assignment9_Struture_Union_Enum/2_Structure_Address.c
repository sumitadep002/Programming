/*
Given the address of a member variable in a structure find the base address of it.
For eg:- 
struct A {
int x;
double y;
float z;
char ch;
}a1;
given address of any member x,y,z or ch , find address(base) of a1.

*/
#include<stdio.h>
struct A {
int x;
double y;
float z;
char ch;
}a1;
int main()
{
    struct A a;
    printf("addres of structure %d",&a);
    printf("\naddres of int %d",&a.x);
    printf("\naddres of double %d",&a.y);
    printf("\naddres of float %d",&a.z);
    printf("\naddres of char %d",&a.ch);
    printf("offset of structure by z is ",);
    
    return 0;
}