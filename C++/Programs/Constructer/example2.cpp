#include<iostream>
using namespace std;

class rectangle
{
private:
int l,b,Area;
public:
rectangle()
{
l=0;
b=0;
}
rectangle(int l)
{
this->l=l;
this->b=l;
}
rectangle(int l,int b)
{
this->l=l;
this->b=b;
}
void show()
{
cout<<"l="<<l<<",b="<<b<<endl;
}
};


int main()
{

rectangle r1,r2(5),r3(5,7);
r1.show();
r2.show();
r3.show();
return 0;
}


