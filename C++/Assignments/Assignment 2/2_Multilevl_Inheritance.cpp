//write a program to demo multilevel inheritance
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "\nBase class content.";
    }
    A()
    {
        cout<<"\nconstructor of class A";
    }
};

class B : public A
{
    public:
    B()
    {
        cout<<"\nconstructor of class B";
    }
};

class C : public B
{
    public:
    C()
    {
        cout<<"\nconstructor of class B";
    }
};

int main()
{
    C obj;
    obj.display();
    return 0;
}