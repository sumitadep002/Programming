#include<stdio.h>

#define size 3

int Check_Diagonal(int**);
int Check_Others(int**);

int main()

{

printf("C program to print the Transpose of the Matrix\n");

printf("------------------------------------------------\n");



int i,j;

int A[size][size];
    
printf("\nEnter the Elements of Matrix:-\n");

for(i=0;i<size;i++)

{
    for(j=0;j<size;j++)
    scanf("%d",&A[i][j]);
}



for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
if((i!=j && A[i][j]!=0) || (i==j && A[i][j] != 1))
{
printf("It is not an identity matrix\n");
return 0;
}
/*else if(i==j && A[i][j] != 1)
{
printf("It is not an identity matrix\n");
return 0;
}
*/
}
}

printf("It is an identity matrix\n");

return 0;
}


