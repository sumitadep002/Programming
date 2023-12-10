/*
rite a program to accept Employee Id , Department No, Designation from user and display 
output with reference to following tables

Example: 
If input given is 
Employee Id : 101 
Dept No : 30 
Designation Code : M 
Then output should be: 
Employee with employee id 101 is working in "Sales" department as "Manager".

*/

#include<stdio.h>


int main()
{
    int Employeee_ID=0,Dept_No=0;
    char Designation_Code;

    printf("enter your Designation Code: ");
    scanf("%c",&Designation_Code);
    printf("\nenter your Employee ID: ");
    scanf("%d",&Employeee_ID);
    printf("\nenter your Department No: ");
    scanf("%d",&Dept_No);

    
    printf("\n");

    switch(Dept_No)
    {
        case 10:
                switch(Designation_Code)
                {
                case 'M':printf("Employee with employee id %d is working in Makreting department as Manager",Employeee_ID);break;
                case 'S':printf("Employee with employee id %d is working in Management department as Manager",Employeee_ID);break;
                case 's':printf("Employee with employee id %d is working in Sales department as Manager",Employeee_ID);break;
                case 'C':printf("Employee with employee id %d is working in Designing department as Manager",Employeee_ID);break;
                default : printf("error occured!!!");break;
                }
                break;

        case 20:
                switch(Designation_Code)
                {
                case 'M':printf("Employee with employee id %d is working in Makreting department as Supervisor",Employeee_ID);break;
                case 'S':printf("Employee with employee id %d is working in Management department as Supervisor",Employeee_ID);break;
                case 's':printf("Employee with employee id %d is working in Sales department as Supervisor",Employeee_ID);break;
                case 'C':printf("Employee with employee id %d is working in Designing department as Supervisor",Employeee_ID);break;
                default : printf("error occured!!!");break;
                }
                break;

        case 30:
                switch(Designation_Code)
                {
                case 'M':printf("Employee with employee id %d is working in Makreting department as Security officer",Employeee_ID);break;
                case 'S':printf("Employee with employee id %d is working in Management department as Security officer",Employeee_ID);break;
                case 's':printf("Employee with employee id %d is working in Sales department as Security officer",Employeee_ID);break;
                case 'C':printf("Employee with employee id %d is working in Designing department as Security officer",Employeee_ID);break;
                default : printf("error occured!!!");break;
                }
                break;

        case 40:
                switch(Designation_Code)
                {
                case 'M':printf("Employee with employee id %d is working in Makreting department as Cleark",Employeee_ID);break;
                case 'S':printf("Employee with employee id %d is working in Management department as Cleark",Employeee_ID);break;
                case 's':printf("Employee with employee id %d is working in Sales department as Cleark",Employeee_ID);break;
                case 'C':printf("Employee with employee id %d is working in Designing department as Cleark",Employeee_ID);break;
                default : printf("error occured!!!");break;
                }
                break;
        
        

        Default: printf("Error encountered!!!");break;
    }



    return 0;
}
