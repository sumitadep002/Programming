/*
Write a program to display number of days in the given year. Check condition for leap year. A 
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap 
years. 
b.Using logical operators
*/
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d",&year);

    if((year % 4 == 0 && (year %100 ==0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
    printf("\n %d is leap year and has 366 days",year);
    else 
    printf("\n %d is not a leap year has 365 days",year);


    return 0;
}
