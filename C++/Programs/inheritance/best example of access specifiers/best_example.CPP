#include<iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void setA(int x)
    {
        a=x;
    }
    int showA(){
        return a;
    }
};
class B:protected A{
    public:
    void set_A(int x)
    {
        setA(x);
    }
    int show_A()
    {
    return showA();
    }
    void setB(int y){
        b=y;
    }
    int showB()
    {
        return b;
    }
        
    void setC(int z){
        c=z;
    }
    int showC()
    {
        return c;
    }
};
int main()
{
    B b;
    b.set_A(10); // a is private and set_A() cannot dorectly access A because it is not a member function of class A
    cout<<endl<<b.show_A();
    b.setB(15);//b is protected member and accessible by member functions of child class
    cout<<endl<<b.showB();
    b.setC(45);//c is public member of class A accessible by child class object directly
    cout<<endl<<b.showC();
    
    return 0;
}