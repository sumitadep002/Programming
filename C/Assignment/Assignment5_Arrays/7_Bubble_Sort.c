/*
 Write a function to sort the array using selection or bubble sort. 
*/
#include <stdio.h>
#include <stdlib.h>
void array_bubble_sort(int *array_ptr,int size_of_array);
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
    printf("after sorting:\n");
    //call the sorting function
    array_bubble_sort(array_ptr,size_of_array);
    printf("\n");
    //print the sorted array
    array_print(array_ptr,size_of_array);
    //free the memory
    array_del(array_ptr);
    
    
    return 0;
}

int array_max(int *a,int n)
{
    int max=0;
    for(int i=0;i<n;i++)
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
	    printf("\nelement[%d]=",pos);
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
    for(int pos=0;pos<size_of_array;pos++)
    {
        if(array_ptr[pos]<min)
        min=array_ptr[pos];
    }
    return min;


}

void array_bubble_sort(int *array_ptr,int size_of_array)
{
    int temp;
    for(int i=0;i<size_of_array;i++)
    {
        for(int j=0;j<size_of_array-1;j++)
        {
            if(array_ptr[j]>array_ptr[j+1])
            {
                temp=array_ptr[j];
                array_ptr[j]=array_ptr[j+1];
                array_ptr[j+1]=temp;
            }
        }
    }
}
