#include<iostream>
using namespace std;
class Address{
    public:
    string street,district,state,country,building_name;

};
class student{
    public:
    Address add;
    string name;
    string domain;
};
int main()
{
    student s;
    cin>>s.add.street;
    cout<<s.add.street;

    return 0;
}