/*
Define a class student with the following specification
Private members of class student
admno integer
sname 20 character
eng. math, science float
total float
ctotal() a function to calculate eng + math + science with float return 
type.
Public member function of class student
Takedata() Function to accept values for admno, sname, eng, science and 
invoke ctotal() to calculate total.
Showdata() Function to display all the data members on the screen
*/
#include<iostream>
using namespace std;
class student{
    int admno;
    char sname[20];
    float eng,math,science;
    float total;
    float ctotal();
    public:
    void Takedata();
    void Showdata();
};


int main()
{
    student s;
    s.Takedata();
    s.Showdata();

    return 0;
}

float student ::ctotal()
{
    return (eng+math+science);
}
void student::Takedata()
{
    cout<<"\nEnter the admno ";
    cin>>admno;
    cout<<"\nEnter the student_name ";
    cin>>sname;
    cout<<"\nEnter the eng ";
    cin>>eng;
    cout<<"\nEnter the science ";
    cin>>science;
    cout<<"\nEnter the maths ";
    cin>>math;
    cout<<"\ntotal "<<ctotal();
    
}
void student::Showdata()
{
    cout<<"\nmath "<<math<<"\nenglish "<<eng<<"\nscience "<<science;
}