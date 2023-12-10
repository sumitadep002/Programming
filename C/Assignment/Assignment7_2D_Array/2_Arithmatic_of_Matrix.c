/*
Write functions to calculate addition, subtraction, multiply two matrices of 3x3. 
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
void addition_matrice(int *a,int *b)
{
    printf("\naddition of matrices:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\na[%d][%d]+b[%d][%d]==%d+%d=%d",i,j,i,j,a[i*3+j],b[i*3+j],a[i*3+j]+b[i*3+j]);
        }
    }
}
void substraction_matrice(int *a,int *b)
{
    printf("\nsubstraction matrices:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\na[%d][%d]-b[%d][%d]==%d-%d=%d",i,j,i,j,a[i*3+j],b[i*3+j],a[i*3+j]-b[i*3+j]);
        }
    }
}
void multiplication_matrice(int *a,int *b)
{
    printf("\nmultiplication of matrices:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\na[%d][%d]*b[%d][%d]==%d*%d=%d",i,j,j,i,a[i*3+j],b[j*3+i],a[j*3+i]-b[j*3+i]);
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

    int *a=(int*)malloc(number_of_column*number_of_row*sizeof(int));
    int *b=(int*)malloc(number_of_column*number_of_row*sizeof(int));

    printf("\nfirst matrice:");
    get_2Darray(number_of_row,number_of_column,a);
    printf("\nsecond matrice:");
    get_2Darray(number_of_row,number_of_column,b);

    addition_matrice(a,b);
    substraction_matrice(a,b);
    multiplication_matrice(a,b);

    return 0;
}