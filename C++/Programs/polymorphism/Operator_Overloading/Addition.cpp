#include <iostream>
using namespace std;
class complex
{
    private:
    int real, imaginary;

public:
    complex(int, int);
    complex();
    void setReal(int);
    void setImg(int);
    int getReal();
    int getImg();
    complex operator +(complex);

};

int main()
{
    complex c1(5,10),c2(5,4);
    complex c=c1+c2;
    cout<<c.getReal()<<","<<c.getImg();
    return 0;
}



complex complex::operator +(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imaginary=imaginary+c.imaginary;
    return temp;
}
complex::complex(int real, int imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}
complex::complex()
{
    this->real = 0;
    this->imaginary = 0;
}
void complex::setReal(int real)
{
    this->real = real;
}
void complex::setImg(int imaginary)
{
    this->imaginary = imaginary;
}
int complex::getReal()
{
    return real;
}
int complex::getImg()
{
    return imaginary;
}
