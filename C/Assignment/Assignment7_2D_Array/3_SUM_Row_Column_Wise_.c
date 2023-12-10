/*
Write a function to calculate the sum of elements in the given row. Write another function to 
calculate the sum of elements in the given column.  
*/
#include<stdio.h>
#include<stdlib.h>
void get_2Darray(int row,int column,int *a)
{
    printf("\nenter elements:");
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
    printf("\nelements:");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("\nelement[%d][%d]=%d",i,j,a[i*column+j]);
        }
    }
}
int sum_row(int row,int column,int row_num,int *a)
{
    int sum=0;
    for (int j = (row_num-1)*row_num; j < row; j++)
    {
        sum=sum + a[j];
    }
    return sum;
}
int sum_column(int row,int column,int column_num,int *a)
{
    int sum=0;
    for (int i = (column_num-1); i < column*row; i+=3)
    {
        sum=sum + a[i]; 
    }
    return sum;
}
int main()
{
    int number_of_row,number_of_column;
    

    printf("enter the number of rows=");
    scanf("%d",&number_of_row);
    printf("enter the number of column=");
    scanf("%d",&number_of_column);

    int *a=(int*)malloc(number_of_column*number_of_row*sizeof(int));

    printf("\n enter matrice elements:");
    get_2Darray(number_of_row,number_of_column,a);

    printf("\n sum of row no 1 is= %d",sum_row(number_of_row,number_of_column,1,a));
    printf("\n sum of column no 1 is= %d",sum_column(number_of_row,number_of_column,1,a));

    return 0;
}