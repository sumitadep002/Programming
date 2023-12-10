/*
Write the definition for a class called time that has hours and minutes as integer. The 
class has the following member functions:
void settime(int, int) to set the specified value in object
void showtime() to display time object
time sum(time) to sum two time object & return time
1. Write the definitions for each of the above member functions.
2. Write main function to create three time objects. Set the value in two objects and 
call sum() to calculate sum and assign it in third object. Display all time objects
*/
#include<iostream>
using namespace std;
class time{
    int hours,minutes;
    public:
    void settime(int,int);
    void showtime(time);
    time sum(time);
};
int main()
{
    time t1,t2,t3;
    t1.settime(5,7);
    t2.settime(10,32);
    t3=t1.sum(t2);
    return 0;
}
void time:: settime(int h,int m)
{
    hours = h;
    minutes = m;
}
time time::sum(time t){
    time temp;
    temp.hours=hours+ t.hours;
    temp.minutes=minutes+t.minutes;
    return temp;
}