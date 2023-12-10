//Base class pointer: it can point to any object of it's descendant class
//converse is not true
#include<iostream>
using namespace std;
class A{
    public:
    virtual void f1()
    {
        cout<<"f1 in A\n";
    }
    
};
class B:public A{
    void f1()
    {
        cout<<"f1 in B\n";
    }
};
int main()
{
    A *p,o1;
    B o2;
    p=&o2;
    p->f1();
    p=&o1;
    p->f1();
    return 0;
}
