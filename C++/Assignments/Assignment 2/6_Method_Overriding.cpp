/*
Write a program with a mother class and an inherited daughter class. Both of them
should have a method void display() that prints a message (different for mother and
daughter). In the main define a daughter and call the display() method on it
*/
#include<iostream>
using namespace std;
class  mother
{
private:
    /* data */
public:
    void display();
};

void mother::display()
{
    cout<<"\nThis is display of mother class";
}

class daughter
{
private:
    /* data */
public:

    void display();
};


void daughter::display()
{
    cout<<"\n this is display in daughter";
}


int main()
{
    daughter d;
    d.display();
    return 0;
}