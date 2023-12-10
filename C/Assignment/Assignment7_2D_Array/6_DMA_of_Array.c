/*
 Write functions to allocate memory for 2 dimensional matrix. Write another function to free the 
memory allocated for 2 dimensional matrix
*/
#include<stdio.h>
#include<stdlib.h>
int* create_2Darray(int row,int column)
{
    int *a = (int*)malloc(row*column*sizeof(int));
    if(a!=NULL)
    {
    printf("memory allocated successfully");
    return a;
    }
    else
    return NULL;
}
void free_array(int *a)
{
    
    
    free(a);
    if(a==NULL)
    printf("\nmemory has been deallocated succesfully");
    else
    {
        printf("\ndeallocation of memory failed");
    }
}
int main()
{
    int *a=create_2Darray(3,3);
    free_array(a);
    return 0;
}