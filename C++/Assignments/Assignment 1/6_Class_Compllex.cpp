/*
Write the definition for a class called complex that has floating point data members
for storing real and imaginary parts. The class has the following member functions:
void set(float, float) to set the specified value in object
void disp() to display complex number object
complex sum(complex) to sum two complex numbers & return complex number
1. Write the definitions for each of the above member functions.
2. Write main function to create three complex number objects. Set the value in two
objects and call sum() to calculate sum and assign it in third object. Display all
complex numbers
*/
#include <iostream>
using namespace std;
class complex
{
    float real, img;

public:
    void set(float, float);
    void disp();
    complex sum(complex);
};

int main()
{
    complex c1, c2, c3;
    c1.set(5.4, 6.7);
    c2.set(9.1, 7.6);
    cout<<"\n";
    c1.disp();
    cout<<"\n";
    c2.disp();
    c3=c1.sum(c2);
    cout<<"\nc1 + c2 ";
    c3.disp();
    return 0;
}
void complex::set(float r, float i)
{
    real = r;
    img = i;
}
void complex::disp()
{
    cout << real << "+" << img;
}
complex complex::sum(complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}