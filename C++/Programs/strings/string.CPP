#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[]="electronics";
    char s2[]="engineering";
    string c;
    
    cout<<s1<<endl;

    cout<<s2;

    

    strcat(s1,s2);
    cout<<endl<<s1;
    strcpy(s2,s1);
    cout<<endl<<s2;
    return 0;
}