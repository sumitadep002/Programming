/*
just to provide common features of to derived class from base  class we make abstract class as base class
*/
#include<iostream>
using namespace std;
class person{ // this is abstract class and this class abstract class cannot be created
public:
virtual void fun()=0; //Pure virtual function or do nothing function


};

class student:public person{
  public:
  void fun()
  {
    cout<<"this is function is in student class";
  }
};
int main()
{
  person *p;
  student s;
  p=&s;
  p->fun();

  return 0;
}

