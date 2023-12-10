//write the function to reverse the array
#include<stdio.h>
#include<stdlib.h>
void array_print(int *array_ptr,int size_of_array);
int* array_accept(int size_of_array);
void array_del(int*);
void array_reverse(int *array_ptr,int size_of_array);



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
    //print next line
    printf("\n");
    //reverse the array
    array_reverse(array_ptr,size_of_array);
    //print the reverse arrray
    array_print(array_ptr,size_of_array);
    printf("\n");
    
    
    
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

void array_reverse(int *array_ptr,int size_of_array)
{
    int temp;
    for(int pos=0;pos<=size_of_array/2;pos++)
    {
        temp=array_ptr[pos];
        array_ptr[pos]=array_ptr[size_of_array-1-pos];
        array_ptr[size_of_array-1-pos]=temp;
    }
}

