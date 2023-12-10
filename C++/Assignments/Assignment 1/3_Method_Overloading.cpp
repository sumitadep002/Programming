/*
Write a program which has Shape class. This class will overload the area() method to
find area of square (if area() has 1 argument), rectangle (if area() has 2 arguments),
trapezoid (if area() has 3 arguments).
*/
#include<iostream>
using namespace std;
class shape{
    public:
    float area(float);
    float area(float,float);
    float area(float,float,float);
};
float shape::area(float a)
{
    return (a*a);
}
float shape::area(float a,float b)
{
    return (a*b);
}
float shape::area(float a,float b,float h)
{
    return ((a+b)*h/2);
}

int main()
{
    shape s;
    cout<<"\narea of square having 5 length is "<<s.area(5);
    cout<<"\narea of rectangle having 5 length and 5 breadthis "<<s.area(5,5);
    cout<<"\narea of square having 5,6 and 7 features is "<<s.area(5,6,7);
    return 0;
}