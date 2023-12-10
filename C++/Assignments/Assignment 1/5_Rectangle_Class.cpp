/*
Write the definition for a class called Rectangle that has floating point data members length and width. 
The class has the following member functions:
->void setlength(float) to set the length data member
->void setwidth(float) to set the width data member
->float perimeter() to calculate and return the perimeter of the rectangle
->float area() to calculate and return the area of the rectangle
->void show() to display the length and width of the rectangle
->int sameArea(Rectangle) that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
 Write the definitions for each of the above member functions.
 Write main function to create two rectangle objects. Set the length and width
of the first rectangle to 5 and 2.5. Set the length and width of the second
rectangle to 5 and 18.9. Display each rectangle and its area and perimeter.
 Check whether the two Rectangles have the same area and print a message
indicating the result. Set the length and width of the first rectangle to 15 and
6.3. Display each Rectangle and its area and perimeter again. Again, check
whether the two Rectangles have the same area and print a message indicating
the result
*/
#include<iostream>
using namespace std;
class Rectangle{
    float length,width;
    public:
    void setlength(float);
    void setwidth(float);
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle);
};

int main()
{
    Rectangle r1,r2;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);
    cout<<"\nr1 perimeter "<<r1.perimeter()<<" and area "<<r1.area();
    cout<<"\nr2 perimeter "<<r2.perimeter()<<" and area "<<r2.area();
    if(r1.sameArea(r2))
    cout<<"\nboth rectangle have same area";
    else
    cout<<"\nboth rectangle have different area";
    return 0;
}
void Rectangle::setlength(float l){
length=l;
}
void Rectangle::setwidth(float w){
width=w;
}
float Rectangle::perimeter(){
return (2*(length+width));
}
float Rectangle::area(){
return (length*width);
}
void Rectangle::show(){
cout<<"\nlength "<<length<<"\nwidth "<<width;
}
int Rectangle::sameArea(Rectangle r){
    if(area()==r.area())
    return 1;
    else 
    return 0;
}