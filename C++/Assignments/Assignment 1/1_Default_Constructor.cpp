/*
Write a program and input two integers in main and pass them to default constructor
of the class. Show the result of the addition of two numbers
*/
#include <iostream>
using namespace std;


class dummyClass
{
int sum;
public:
dummyClass(int a=0, int b=0)
    {
        sum = a + b;
    }
int getSum()
{
    return sum;
}
};
int main(int argc,int argv[])
{
    int a=argv[0],b=argv[1];
    dummyClass ob(a,b);
   cout<<ob.getSum();
    return 0;
}