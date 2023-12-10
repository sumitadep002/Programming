#include <iostream>
using namespace std;
void fun(int a,int b=0);
int main()
{

fun(5);

return 0;
}

void fun(int a, int b)
{
cout<<a<<" "<<b;
}
