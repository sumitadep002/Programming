#include<iostream>
using namespace std;
float Area(float r)
{
return (3.14*r*r);
}
float Area(float a, float b)
{
return a*b;
}


/*
 *This is not allowed and cannot not be considered as function overloading 
 *Because it depeneds on number or types of arguments
int Area(float r)
{
return 5;
}
*/

int main()
{
cout<<Area(10)<<endl<<Area(10,10);
return 0;
}
