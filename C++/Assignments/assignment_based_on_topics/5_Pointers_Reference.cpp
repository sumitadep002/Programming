/*
Pointers & Refrence
Write a C++ function named apply_all that expects two arrays of integers and their sizes and
 dynamically allocates a new array of integers whose size is the product of the 2 array sizes
 
 The function should loop through the second array and multiplies each element across each 
element of array 1 and store the
 product in the newly created array.
 
 The function should return a pointer to the newly allocated array
*/
#include<iostream>
using namespace std;
 void apply_all(int [],int ,int [],int);
 void print(int [],int);
int main()
{
    int a[5]={1,2,3,4,5};
    int b[3]={10,20,30};
    print(a,5);
    cout<<endl;
    print(b,3);
    cout<<endl;
    apply_all(a,5,b,3);
    return 0;
}
void apply_all(int a[],int size_of_a,int b[],int size_of_b)
{
    int *arr=new int[size_of_a*size_of_b];
    int k=0;
    for(int j=0;j<size_of_b;j++)
    {
        for(int i=0;i<size_of_a;i++)
        {
            arr[k]=a[i]*b[j];
            k++;
        }
    }
    
    cout<<"arr:";
    print(arr,size_of_a*size_of_b);
}
void print(int a[],int size_of_a)
{
    cout<<"[ ";
    for(int i=0;i<size_of_a;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
}