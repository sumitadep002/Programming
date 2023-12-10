/*
The output operator, commonly known as the insertion operator (<<), is used. 
The standard output stream cout Like cin, cout also treats data as a stream of characters. 
These characters flow from the program to cout through the output operator. 
The output operator works on two operands, namely, the cout stream on its left and the expression to be displayed on its right. 
The output operator directs (inserts) the value to cout
*/
/*
The input operator, commonly known as the extraction operator (>>), is used with the standard input stream, cin. 
As stated earlier, cin treats data as a stream of characters. 
These characters flow from cin to the program through the input operator. 
The input operator works on two operands, namely, the c in stream on its left and a variable on its right. 
Thus, the input operator takes (extracts) the value through cin and stores it in the variable
*/
#include<iostream>
using namespace std;
int main(){
    int i;
    //<< is insertion operation and cout is ostream object
    cout<<"enter the number in i\n"; 
    //<< is extraction operation and cout is istream object
    cin>>i;
    cout<<"i is"<<i;
}