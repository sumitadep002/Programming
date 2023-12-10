//write three programs which specify public, private and protected
#include<iostream>
using namespace std;
class c{
    private:
    int a;
    
};
int main()
{
    c A;
    A.a=0;//private members can not be accessed directly by object
    cout<<A.a;
    return 0;
}