#include<iostream>
using namespace std;
void swap_by_address(int *a,int *b);
void swap_by_reference(int &a,int &b);

int main()
{
int a=5,b=6;

cout<<"a="<<a<<",b="<<b<<endl;
swap_by_address(&a,&b);
cout<<"a="<<a<<",b="<<b<<endl;
swap_by_reference(a,b);
cout<<"a="<<a<<",b="<<b<<endl;

return 0;
}

void swap_by_address(int *a,int *b)
{
int temp = *a;
*a=*b;
*b=temp;
}

void swap_by_reference(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
} 
