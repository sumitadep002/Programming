/*Write a program to calculate Area and Perimeter of Triangle for given length of three sides of 
triangle. Use sqrt() function from math.h to calculate square root. 
Perimeter = a + b + c
area = squar_root_of(s*(s-a)*(s-b)*(s-c))*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    
    float area,intermediate_value;
    printf("enter the length of side a ");
    scanf("%f",&a);

    printf("\nenter the length of side b ");
    scanf("%f",&b);
    
    printf("\nenter the length of side c ");
    scanf("%f",&c);

    printf("\nperimeter of the triangle : %0.2f + %0.2f + %0.2f = %0.2f",a,b,c,a+b+c);

    s=(a+b+c)/2;
    intermediate_value = s*(s-a)*(s-b)*(s-c);
    area=sqrt(intermediate_value);    //sqrt function to find square root
    printf("\narea of triangle %f\n",intermediate_value);
    return 0;
}   
