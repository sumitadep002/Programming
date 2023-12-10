#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ASC 0
#define DEC 1
struct employee{

char name[50];

int id;

float salary;

};

typedef struct employee employee;

void Employee_Swap(employee *e1,employee *e2);
void Employee_Sort_Salary(employee *e,int size_of_array,int order);
void Employee_Sort_Id(employee *e,int size_of_array,int order);
void Employee_Sort_Name(employee *e,int size_of_array,int order);
void Employee_Scan(employee *e,int n);
void Employee_Print(employee *e,int n);


int main()
{
employee *e=NULL;

int n,temp;

printf("Enter the number of employees: ");
scanf("%d",&n);

printf("Total Number of employees %d\n",n);

e=(employee*)malloc(sizeof(employee)*n);

if(e==NULL)
{
printf("malloc failed\n");
return 0;
}

printf("Enter Employee details\n");
Employee_Scan(e,n);

Employee_Sort_Name(e,n,DEC);

printf("\nSorted Employee details\n");
Employee_Print(e,n);





return 0;
}


void Employee_Sort_Salary(employee *e,int n,int order)
{
	for(int i=1;i<=(n-2);i++)
	{
		for(int j=0;j<=(n-1-i);j++)
		{
			if(order == ASC)
			{
			if(((e+j)->salary)>((e+j+1)->salary))
			Employee_Swap(e+j,e+j+1);
			}
			else
			{
			if(((e+j)->salary)<((e+j+1)->salary))
			Employee_Swap(e+j,e+j+1);
			}
		}
	}
}

void Employee_Sort_Name(employee *e,int n,int order)
{
	for(int i=1;i<=(n-2);i++)
	{
		for(int j=0;j<=(n-1-i);j++)
		{
			if(order == ASC)
			{
			if(strcmp((e+j)->name,(e+j+1)->name)>0)
			Employee_Swap(e+j,e+j+1);
			}
			else
			{
			if(strcmp((e+j)->name,(e+j+1)->name)<0)
			Employee_Swap(e+j,e+j+1);
			}
		}
	}
}

void Employee_Sort_Id(employee *e,int n,int order)
{
	for(int i=1;i<=(n-2);i++)
	{
		for(int j=0;j<=(n-1-i);j++)
		{	
			if(order == ASC)
			{
			if(((e+j)->id)>((e+j+1)->id))
			Employee_Swap(e+j,e+j+1);
			}
			else
			{
			if(((e+j)->id)<((e+j+1)->id))
			Employee_Swap(e+j,e+j+1);
			}
		}
	}
}


void Employee_Swap(employee *e1,employee *e2)
{
	employee temp;
	
	temp.salary=e1->salary;
	e1->salary=e2->salary;
	e2->salary=temp.salary;
	
	temp.id=e1->id;
	e1->id=e2->id;
	e2->id=temp.id;
	
	strcpy(temp.name,e1->name);
	strcpy(e1->name,e2->name);
	strcpy(e2->name,temp.name);
}


void Employee_Scan(employee *e,int n)
{
for(int i=0;i<n;i++)
{
printf("\nEmployee[%d] name:",i+1);
scanf("%s",(e+i)->name);
printf("Employee[%d] id:",i+1);
scanf("%d",&(e+i)->id);
printf("Employee[%d] salary:",i+1);
scanf("%f",&(e+i)->salary);
}

}
void Employee_Print(employee *e,int n)
{
for(int i=0;i<n;i++)
{
printf("Employee[%d] name: %s, id: %d, salary: %0.2f\n",i+1,(e+i)->name,(e+i)->id,(e+i)->salary);
}
}
