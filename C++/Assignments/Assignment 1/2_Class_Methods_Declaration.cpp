/*
Write a program which perform arithmetic operations. All the function definitions
should define outside the class
*/
#include<iostream>
using namespace std;
class calc{
    float a,b;
    public:
    calc(int p=0,int q=0)
    {
        a=p;
        b=q;
    }
    float add(void);
    float sub(void);
    float mul(void);
    float div(void);
};
float calc::add()
{
    return (a+b);
}
float calc::sub()
{
    return (a-b);
}
float calc::mul()
{
    return (a*b);
}
float calc::div()
{
    if(b!=0)
    return (a/b);
    else
    cout<<"\nERROR";
}
int main()
{
    calc ob(5,7);
    cout<<"\naddition "<<ob.add();
    cout<<"\nsubstraction "<<ob.sub();
    cout<<"\nproduct "<<ob.mul();
    cout<<"\ndivision "<<ob.div();
    
    return 0;
}