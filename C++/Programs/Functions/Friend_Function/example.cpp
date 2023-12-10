#include<iostream>
using namespace std;
class B;
class A{
    private:
    int a,b;
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend void fun(A,B);
};
class B{
    private:
    int a,b;
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend void fun(A,B);
};
void fun(A a1,B b1){
    //cout<<"this is inside fun function";
    cout<<"A.a="<<a1.a<<endl<<"B.b="<<b1.b<<endl; //friend function can not directly access members of class.
}
int main()
{

	A obj_A;
	B obj_B;
	obj_A.setData(5,6);
	obj_B.setData(7,8);
	fun(obj_A,obj_B);


    return 0;
}
