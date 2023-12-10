/*
Write a program to display number of days in the given year. Check condition for leap year. A 
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap 
years. 
c. Conditional operator
*/
#include<stdio.h>
int main()
{
    int year=0,days=0;
    printf("enter the year ");
    scanf("%d",&year);

    ((year % 4 == 0 && (year %100 ==0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))) ? printf("\n%d is a leap year has 366 days",year):printf("\n%d is not a leap year has 365 days",year);
    return 0;
}
