/*
Write a program that asks the user to enter the following:
An integer representing the number of cents 
 
You may assume that the number of cents entered is greater than or equal to zero
 
The program should then display how to provide that change to the user.
In the US:
1 dollar is 100 cents
1 quarter is 25 cents
1 dime is 10 cents
1 nickel is 5 cents, and
1 penny is 1 cent.
Here is a sample run:
Enter an amount in cents : 92
You can provide this change as follows:
dollars : 0
quarters : 3
dimes : 1
nickels : 1
pennies : 2
*/
#include<iostream>
using namespace std;

int main()
{
    int cent;
    cout<<"enter the number of cents ";
    cin>>cent;
    if(cent<0)
    cout<<"enter non zero number!!!";
    else
    {
        cout<<"\ndollars :"<<cent/100;
        cent=cent%100;
        cout<<"\nquarters :"<<cent/25;
        cent=cent%25;
        cout<<"\ndimes :"<<cent/10;
        cent=cent%10;
        cout<<"\nnickel :"<<cent/5;
        cent=cent%5;
        cout<<"\npenny :"<<cent;
    }
    return 0;
}