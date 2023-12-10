#include<iostream>
using namespace std;
class complex{
    private:
    int real,img;
    public:
    friend ostream& operator<<(ostream &o,complex &c);
    complex(int real=0,int img=0)
    {
    this->real=real;
    this->img=img;
    }

};
ostream& operator<<(ostream &o,complex &c)
    {
        o<<c.real<<"+i"<<c.img;  
        return o;      
    }


int main()
{
    complex c(5,9);
    cout<<c;

    return 0;
}