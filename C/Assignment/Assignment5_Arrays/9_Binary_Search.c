/*
Write a function to search the given number into the array using binary search and return the 
index of the element. If element is not found it should return -1
*/
#include <stdio.h>
#include <stdlib.h>

int array_binary_search(int *, int size_of_array, int search_element);
int array_search(int *array_ptr,int size_of_array,int search_element);
void array_bubble_sort(int *array_ptr,int size_of_array);
void array_print(int *array_ptr,int size_of_array);
int* array_accept(int size_of_array);
void array_del(int*);
int array_max(int *array_ptr,int size_of_array);
int array_min(int *array_ptr, int size_of_array);

int main()
{
    int *array_ptr=NULL,size_of_array=0, search_element = 0;

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
    //user input the element
    printf("Enter search element ");
    scanf("%d",&search_element);
    //newline
    printf("\n");
    //sort before binary search
    array_bubble_sort(array_ptr,size_of_array);
    printf("\n");
    //search the element
    if(array_binary_search(array_ptr,size_of_array,search_element)==-1)
    printf("element %d does not exist in the array\n",search_element);
    else
    {
    printf("%d is indexed at %d",search_element,array_binary_search(array_ptr,size_of_array,search_element));
    }
    //free the memory
    array_del(array_ptr);
    
    
    return 0;
}

int array_binary_search(int *array_ptr, int size_of_array, int search_element) {
    int left = 0;
    int right = size_of_array - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (array_ptr[mid] == search_element) {
            return mid;
        } else if (array_ptr[mid] < search_element) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
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
            printf("%3d", array_ptr[pos]);
        }
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
