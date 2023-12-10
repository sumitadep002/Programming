#include<iostream>
using namespace std;
class data{
    public:
    int a,b;
    int *p=NULL;
    data() //dynamic constructor
    {
        p=new int;
    }
    data(data &d)
    {
        a=d.a;
        b=d.b;
        *p=*(d.p);
    }
    int *p=new int;
};
int main()
{
    data d1,d3;
    d1.a=5;
    d1.b=50;
    data d2=d1;//will call copy constructor helps in DeepCopy
    d3=d1;//will call implicit copy assignment operator helps in ShallowCopy

    return 0;
}