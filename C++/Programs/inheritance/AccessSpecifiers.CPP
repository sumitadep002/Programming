#include <iostream>
using namespace std;
class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
void funBase()
{
    a=10;
    b=20;
    c=30;
}
};
class Derived:Base
{
    public:
    //this function can access only public and protected members
    //private members are available but not acccessible.
    void funDerived()
    {

    }
};
int main()
{
    Base x;
    
    x.a=15;//invalid : privated members cannot be accessed directly
    x.b=30;//invalid : protected members cannot be accessed directly
    x.c=45;//valid : public members can be directly accessed

    return 0;
}