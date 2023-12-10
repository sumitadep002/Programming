//program to demo multiple inheritance
#include<iostream>
using namespace std;
class SupperClass{
    private:
    int a;
    public:
    SupperClass()
    {
        cout<<"\nThis is SuperClass contructor";
    }
    ~SupperClass()
    {
        cout<<"\nThis is SuperClass Destructor";
    }
};
class C1:SupperClass
{
    private:
    int b;
    public:
    C1()
    {
        cout<<"\nThis is C1 contructor";
    }
    ~C1()
    {
        cout<<"\nThis is C1 Destructor";
    }
};
class C2:SupperClass
{
    private:
    int c;
    public:
    C2()
    {
        cout<<"\nThis is C2 contructor";
    }
    ~C2()
    {
        cout<<"\nThis is C2 Destructor";
    }
};
int main()
{
    C1 obc1;
    C2 obc2;

    return 0;
}