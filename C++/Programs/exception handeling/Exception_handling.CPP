#include<iostream>
using namespace std;
int d(int,int);
int main()
{
    int a,b,c;
    cout<<"enter the number a";
    cin>>a;
    cout<<"enter the number b";
    cin>>b;
    try{
        c=d(a,b);
        cout<<c;
    }
    catch(int e)
    {
        cout<<"Division by zero "<<"ERROR "<<e;
    }
    return 0;
}
int d(int a,int b)
{
    if(b==0)
    throw 404;
    else if (b==-1)
    throw 405;
    return (a/b);
}