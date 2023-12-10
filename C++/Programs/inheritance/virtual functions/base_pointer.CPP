/*
overriding: same prototype of a function in two different class but different definition
Note:
virtual keyword cause compiler to create an pointer in base pointer (*vptr)

*/
#include<iostream>
using namespace std;
class A{
    public:
    virtual void fun(){
    cout<<endl<<"class A fun";
    }
};
class B:public A{
    public:
    void fun(){
    cout<<endl<<"class B fun";
    }
};
int main()
{
    B b;
    A *p=&b;
    p->fun();
    return 0;
}