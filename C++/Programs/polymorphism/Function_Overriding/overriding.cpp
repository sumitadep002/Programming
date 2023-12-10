/*
 *Function Overriding: 
 *Function with same prototype and name but different definition in difference classes
 */
#include<iostream>
using namespace std;
class A{
    public:
    void f1(){
        cout<<"f1 in A";
    }
    void f2(){
        cout<<endl<<"f2 in A";
    }
};
class B:public A
{
    public:
    void f1(){
        cout<<endl<<"f1 in B";

    }
    void f2(){
        cout<<endl<<"f2 in B";
    }
};
int main()
{
    B obj;
    obj.f1();
    obj.f2();  
    return 0;
}
