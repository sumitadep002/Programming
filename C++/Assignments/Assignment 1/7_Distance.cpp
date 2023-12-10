/*
Write the definition for a class called Distance that has data member feet as integer 
and inches as float. The class has the following member functions:
void set(int, float) to give value to object
void disp() to display distance in feet and inches
1. Write the definitions for each of the above member functions.
2. Write main function to create three Distance objects. Set the value in two objects 
and overload ‘+’ operator to calculate sum and assign it in third object. Display all 
distances. ()
*/
#include<iostream>
using namespace std;
class Distance{
    int feet;
    float inches;
    public:
    void set(int,float);
    void disp();
    Distance operator+(Distance);
};
int main()
{
    Distance d1,d2,d3;
    d1.set(5,6);
    d2.set(6,4);
    d3=d1+d3;
    d3.disp();

    return 0;
}

void Distance:: set(int f,float i)
{
    feet=f;
    inches=i;
}
void Distance::disp()
{
    cout<<"feet "<<feet<<"'"<<inches;
}
Distance Distance:: operator+(Distance d1)
{
    Distance d;
    d.feet=feet+ d1.feet;
    d.feet=inches+ d1.inches;
    return d;
}