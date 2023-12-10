/*
Take as input S, a string. Write a function that does basic string compression. Print the value
returned.
Sample input: aaabbccds
Sample Output: a3b2c3d1s1

*/
#include<iostream>
using namespace std;
string stringCompression(string);
int main()
{
    string s;
    cin>>s;
    int i=0;
    cout<<stringCompression(s);
    return 0;
}
string stringCompression(string s)
{
    string temp;
    int i=0;
    char count='1';
    temp+=s[0];
    while(s[i]!='\0')
    {
        if(s[i]==s[i+1])
        count++;
        else
        {
        temp+=count;
        temp+=s[i+1];
        count='1';
        }
        i++;
    }
    return temp;
}