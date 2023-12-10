//write three programs which specify public, private and protected
#include<iostream>
using namespace std;
class c{
    protected:
    int a;
};
class d:public b{
    void print()
    {
        cout<<a;
    }
    void set(int x)
    {
        a=x;
    }
}
int main()
{
    c A;
    A.a=0;
    cout<<A.a;
    return 0;
}