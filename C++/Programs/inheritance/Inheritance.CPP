//contructor and inheritance
#include<iostream>
using namespace std;
class Base{
    public:
    Base()
    {
        cout<<"Default of Base"<<endl;
    }
    Base(int x)
    {
        cout<<"parameterized constructor x = "<<x<<endl;
    }
};
class Derived:public Base{
    public:
    Derived()
    {
        cout<<"Default Derived contructor"<<endl;
    }
    Derived(int a)
    {
        cout<<"Derived parameterized Contructor a ="<<a<<endl;
    }
    Derived(int x,int a):Base(x)
    {
        cout<<"derived constructor called parameterized contructor of Base class a = "<<a<<endl;
    }
};
int main()
{
    //in this case first base class constructor and then child class constructor will be executed.
   // Derived d;
    //in this case fitst default constructor of Base class and then parameterized contructor of derived class.
    //Derived d1(5);
    //this will call parameterized constructor of base class.
    Derived d2(5,6);

    return 0;
}