/*
 *This program proves that function overloading can be achieved by changing the type of
 *Argument as well
 */
#include<iostream>
using namespace std;
void fun(int a)
{
cout<<"Fun with int argument\n";
}
void fun(float b)
{
cout<<"Funt with float argument\n";
}
int main()
{
fun(1);
fun(1.1f);
return 0;
}
