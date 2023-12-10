/*
 Create a nested structure, access members of inner structure from 
outer one
*/
#include<stdio.h>
struct vehicle{
    struct{
        int wheels = 4;
    }b;
    struct{
        int wheels = 2;
    }c;
}a;

int main()
{
    printf("%d %d",a.b.wheels,a.c.wheels);
    return 0;
}