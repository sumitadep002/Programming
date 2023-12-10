#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("MyFile.txt");
    int pos;
    pos=fin.tellg();  //will return position of put pointer same with get pointer in tellp() function.
    cout<<pos;
    
    return 0;   
}