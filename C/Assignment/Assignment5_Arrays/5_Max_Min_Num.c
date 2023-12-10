/*
Write a function to calculate maximum and minimum of the array elements. 
*/


#include <stdio.h>
#include <stdlib.h>
void array_print(int *array_ptr,int size_of_array);
int* array_accept(int size_of_array);
void array_del(int*);
int array_max(int *array_ptr,int size_of_array);
int array_min(int *array_ptr, int size_of_array);

int main()
{
    int *array_ptr=NULL,size_of_array=0;

  
    printf("Enter number of elements:");
    scanf("%d",&size_of_array);
    printf("Entered number of elements: %d\n", size_of_array);
    
    array_ptr = array_accept(size_of_array);
    
    if(array_ptr==NULL)
    return 0;
    
    //print array elements
    array_print(array_ptr,size_of_array);
    //print the new line
    printf("\n");
    //print the max of the array
    printf("MAX %d & ",array_max(array_ptr,size_of_array));
    //print the max of the array
    printf("MIN %d\n",array_min(array_ptr,size_of_array));
    
    //free the memory
    array_del(array_ptr);
    
    
    return 0;
}

int array_max(int *a,int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }

    return max;
}

void array_del(int *array_ptr)
{


free(array_ptr);

}



int* array_accept(int size_of_array)
{
	//DMA	
	int *array_ptr = (int*)malloc(size_of_array * sizeof(int));

	//Verify DMA
	if (array_ptr == NULL)
	{
	printf("Memory not allocated.\n");
	return NULL;
	}   

	for (int pos = 0; pos < size_of_array; pos++) 
	{
	    printf("element[%d]=",pos);
	    scanf("%d",&array_ptr[pos]);
	}
        
        return array_ptr;

}
void array_print(int *array_ptr,int size_of_array)
{
	
    printf("The elements of the array are: ");
        for (int pos = 0; pos < size_of_array; pos++) 
        {
            printf("%d ", array_ptr[pos]);
        }
}

int array_min(int *array_ptr, int size_of_array)
{
    int min=array_ptr[0];
    for(int pos=1;pos<size_of_array;pos++)
    {
        if(array_ptr[pos]<min)
        min=array_ptr[pos];
    }
    return min;


}
