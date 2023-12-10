/*
Write a function to calculate maximum and minimum of the array elements. 
*/


#include <stdio.h>
#include <stdlib.h>
void array_left_shift(int *arr, int size, int pos);
void array_right_shift(int *arr, int size, int pos);
int array_remove_duplicate(int *arr,int size);
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
    array_print(array_ptr,size_of_array);
    
    if(array_ptr==NULL)
    return 0;
    
    
    size_of_array=array_remove_duplicate(array_ptr,size_of_array);
    
    printf("\n");
    array_print(array_ptr,size_of_array);
    printf("\n");
    
    //free the memory
    array_del(array_ptr);
   
    return 0;
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
	    //printf("element[%d]=",pos);
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

int array_remove_duplicate(int *arr,int size)
{
for(int i=0;i<=size-2;i++)
{
for(int j=i+1;j<size;j++)
{
if(arr[i] == arr[j])
{
array_left_shift(arr,size,j);
arr=realloc(arr,--size);
i--;
}
}
}
return size;
}
void array_right_shift(int *arr, int size, int pos)
{
for(int i=size-2;i>=pos;i--)
{
arr[i+1]=arr[i];
}
}

void array_left_shift(int *arr, int size, int pos)
{
for(int i=pos;i<size-1;i++)
{
arr[i]=arr[i+1];
}
}
