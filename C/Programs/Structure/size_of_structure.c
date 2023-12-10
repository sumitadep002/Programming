#include<stdio.h>
struct person1
{
char name[20];//20 byte
int age;      //4 byte
float salary; //4 byte
};
struct person2
{
char name;//1 byte
int age;  //4 byte
float salary; //4 byte
};

int main()
{
struct person1 p1;
struct person2 p2;
printf("size of person 1 instance: %ld\n",sizeof(p1));
printf("size of person 2 instance: %ld",sizeof(p2));
return 0;
}

