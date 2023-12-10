#include<iostream>
using namespace std;
void fun(const int);
int main()
{
fun(5);
return 0;
}
void fun(const int a)
{
//a++; This will lead to error 
cout<<a;
}
