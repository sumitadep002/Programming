#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<endl<<"this is class fun()";
    }
    A()
    {
        cout<<endl<<"this is cont of A";
    }
};
//virtual keyword will avoid ambiguity
class B:public virtual A{
    public:
    void fun(){
        cout<<endl<<"this is class fun()";
    }
    B()
    {
        cout<<endl<<"this is cont of B";
    }
};
//virtual keyword will avoid ambiguity
class C:public virtual A{
    public:
    void fun(){
        cout<<endl<<"this is class fun()";
    }
    C()
    {
        cout<<endl<<"this is cont of C";
    }
};
class D: public C,public B{
    public:
    void fun(){
        cout<<endl<<"this is class fun()";
    }
    D()
    {
        cout<<endl<<"this is cont of D";
    }
};
int main()
{
    cout<<"--------------------------------class A--------------------------------";
    A a;
    cout<<"\n--------------------------------class B--------------------------------";
    B b;
    cout<<"\n--------------------------------class C--------------------------------";
    C c;
    cout<<"\n--------------------------------class D--------------------------------";
    D d;
}