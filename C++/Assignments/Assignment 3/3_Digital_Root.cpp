/*
You are given a number n.
You need to find the digital root of n.
DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.
Example:
Input: 
N= 99999
Output:9
Explanation: Sum of digits of 99999 is 45 which is not a single digit number, hence sum of digit 
of 45 is 9 which is a single digit number.

*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int temp=n;
    while (temp!=0)
    {
        
        sum = sum + temp%10;
        
        temp=temp/10;
        if(temp==0 && sum/10!=0)
        {
            temp=sum;
            sum=0;
        }
        
    }
    cout<<endl<<sum;
    
    
    return 0;
}