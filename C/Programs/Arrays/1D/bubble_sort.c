#include<stdio.h>

int main()
{
int *arr;
int temp,n;
printf("Enter the size of array:");
scanf("%d",&n);
printf("\nEnter the elements:\n"); 
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<=(n-2);i++)
{
for(int j=0;j<=(n-i-2);j++)
{
if(arr[j]>arr[j+1])
{
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
for(int i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
