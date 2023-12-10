/*
Write a function to accept a 2-D array from the user. Write another function to print the 2-D 
array. Re-use these functions in rest of the assignments wherever required
*/
#include<stdio.h>
#include<stdlib.h>
void get_2Darray(int row,int column,int *a)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("\nelement[%d][%d]=",i,j);
            scanf("%d",&a[i*column+j]);
        }
    }
}
void print_2Darray(int row,int column,int *a)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("\nelement[%d][%d]=%d",i,j,a[i*column+j]);
        }
    }
}
int main()
{
    int number_of_row,number_of_column;
    printf("enter the nuber of rows=");
    scanf("%d",&number_of_row);
    printf("enter the number of column=");
    scanf("%d",&number_of_column);
    int *array=(int*)malloc(number_of_column*number_of_row*sizeof(int));
    get_2Darray(number_of_row,number_of_column,array);
    print_2Darray(number_of_row,number_of_column,array);

    return 0;
}