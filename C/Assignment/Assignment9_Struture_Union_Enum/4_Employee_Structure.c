/*
Create an employee structure with the following members
empid, employee name, salary, year of joining etc.
Accept the data for certain no. of employees and find their total, 
average, max, min salary
Also find out the employees with maximum, minimum service,use a 
function to find service for each employee element in the array
*/
#include<stdio.h>
struct employee{
    int empid;
    char name[30];
    unsigned int salary;
    int year_of_joining;
};
typedef employee employee;
void get_employee(employee *e)
{
    printf("enter the employee id ");
    scanf("%d",e->empid);
    printf("enter the employee name ");
    fflush(stdin);
    gets(e->name);
    printf("enter the employee salary ");
    scanf("%d",e->salary);
    printf("enter the employee year of joining ");
    scanf("%d",e->year_of_joining);
}
int main()
{
    employee e[5];
    
    for(int i=0;i<5;i++)
    {
    get_employee(&e[i]);
    
    }
    

    

    //printf("\nname %s\nempid %d\nsalary %d\nyear of joining %d",e.name,e.empid,e.salary,e.year_of_joining);
    return 0;
}