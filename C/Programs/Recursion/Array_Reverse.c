#include<stdlib.h>
#include<stdio.h>
int rev(int *a,int *b);
int main()
{
int n;
int *arr;
printf("Enter the size of array: ");
scanf("%d",&n);
arr=(int*)malloc(sizeof(int)*n);
printf("Enter elements for array:");
for(int i=0;i<n;i++)
{
printf("\na[%d]:",i);
scanf("%d",arr+i);
}

printf("\nBefore Reversing:");
for(int i=0;i<n;i++)
printf("%d ",*(arr+i));

rev(arr,arr+n-1);

printf("\nBefore Reversing:");
for(int i=0;i<n;i++)
printf("%d ",*(arr+i));


return 0;
}

int rev(int *a,int *b)
{
int temp;
	
if(a>=b)
return 0;

temp=*a;
*a=*b;
*b=temp;



return rev(a+1,b-1);
}
