//  static member variable are initialized with 0 by default
//  static function are allowed to access only static variables
//  staic member function can be ivoked without object;
#include<iostream>
using namespace std;
class t
{
private:
  static int count; //  static member variable
  int value;
public:
  t(/* args */);
  ~t();
  static void setcount(int); // static member function cam only access static members
  static int getCount()
  {
    return count;
  }
};

int main()
{
  // t t1,t2;
  // t1.setcount(10);
  // t t3,t4;
  // t::setcount(100);
  t::setcount(100);
  cout<<endl<<t::getCount();
  return 0;
}
void t::setcount(int x)
{
  count=x;
}
t::t(/* args */)
{
  cout<<endl<<count++;
}

t::~t()
{
  // cout<<endl<<count;
}
int t:: count;