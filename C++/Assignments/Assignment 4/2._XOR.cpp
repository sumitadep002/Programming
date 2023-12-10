/*
We are given two coins of value x and y. we have to find the maximum of value of a XOR b 
where x <= a <= b <= y.
Sample Input
5
6
Sample Output
3

*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<(a^b);
    
    return 0;
}