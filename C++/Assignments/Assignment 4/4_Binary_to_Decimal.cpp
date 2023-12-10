#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int power(int,int);
int main()
{
    string binary;
    int strLength;
    int dec=0;
    int temp=0;
    cout<<"enter number in binary in 32 or less than 32 bit ";
    cin>>binary;
    cout<<"Bin : "<<binary;
    for(strLength=0;binary[strLength]!='\0';strLength++);

    for(int i=0;i<strLength;i++)
    {
        //temp=binary[i];
        if(binary[i]=='1')
        temp=1;
        else
        temp=0;
        dec=dec+power(2,i)*temp;
        
    }
    cout<<endl<<"decimal is "<<dec;
    
    return 0;
}
int power(int index,int exponential)
{
    int p=1;
    for(int i=0;i<exponential;i++)
    p=p*index;
    return p;
}