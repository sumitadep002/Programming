#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, d;
    printf("Enter the number of rows, columns and depth to create an array: ");
    scanf("%d %d %d", &r, &c, &d);
    
    int ***arr = (int***)malloc(sizeof(int***)*d);
    
    for(int i=0;i<d;i++)
    {	
    	printf("i=%d:\n",i+1);
    
    	*(arr+i)=(int**)malloc(sizeof(int*)*r);
    	
    	for(int j=0;j<r;j++)
    	{
    		*(*(arr+i)+j) = (int*)malloc(sizeof(int)*c);
    		for(int k=0;k<c;k++)
    		{
    			scanf("%d",*(*(arr+i)+j)+k);
    		}
    		fflush(stdin);
    	}
    }
    
    printf("\n\nResult:\n");
    
    for(int i=0;i<d;i++)
    {	
    	printf("i=%d:\n",i);
    	for(int j=0;j<r;j++)
    	{
    		for(int k=0;k<c;k++)
    		{
    			printf("%d ",*(*(*(arr+i)+j)+k));
    		}
    		printf("\n");
    		
    	}
    }
    

    return 0;
}
