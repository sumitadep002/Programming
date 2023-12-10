/*
Create a three-level hierarchy of classes with default constructors, along with
destructors, both of which announce themselves to cout. Verify that for an object of
the most derived type, all three constructors and destructors are automatically called.
Explain the order in which the calls are made.
*/
#include<iostream>
using namespace std;
class A
{
private:
    /* data */
public:
    A(/* args */);
    ~A();
};

A::A(/* args */)
{
    cout<<"\nthis is class A constructor";
}

A::~A()
{
    cout<<"\nthis is class A destructor";
}
class B
{
private:
    /* data */
public:
    B(/* args */);
    ~B();
};

B::B(/* args */)
{
    cout<<"\nthis is class B constructor";
}

B::~B()
{
    cout<<"\nthis is class B destructor";
}
class C
{
private:
    /* data */
public:
    C(/* args */);
    ~C();
};

C::C(/* args */)
{
    cout<<"\nthis is class C constructor";
}

C::~C()
{
    cout<<"\nthis is class C destructor";
}

int main()
{
    A a;
    B b;
    C c;
    return 0;
}