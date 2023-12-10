#include"Arr_Header.h"
#include<stdio.h>
int main()
{

int n;
int *arr;
printf("Enter the number of Elements: ");
scanf("%d",&n);

arr=array_accept(n);
array_print(arr);
array_del(arr,n);
return 0;
}
