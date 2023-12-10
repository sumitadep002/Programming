/*Write a program that defines a shape class with a constructor that gives value to width
and height. The define two sub-classes triangle and rectangle, that calculates the area
of the shape area(). In the main, define two variables a triangle and a rectangle and
then call the area() function in these two variables*/
#include <iostream>
using namespace std;
class shape
{
private:
    float width, length;

public:
    shape(float, float);
    virtual float area()=0;
    float getWidth(){return width;}
    float getLength(){return length;}
    
};
class rectangle:public shape{
    public:
    rectangle(float length,float width) :shape(length,width) 
    {

    }
    
    float area()
    {
        return (getLength()*getWidth());
    }
};
class triangle:public shape{
    public:

    triangle(float length,float width) :shape(length,width) 
    {

    }

    float area()
    {
        return (getLength()*getWidth());
    }
};




shape::shape(float length, float width)
{
    this->length = length;
    this->width = width;
}


int main()
{
    shape *s1,*s2;
    triangle t(20.50,50.84);
    rectangle r(87.12,94.64);
    s1=&t;
    s2=&r;
    cout<<endl<<s1->area();
    cout<<endl<<s2->area();

    return 0;
}