#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char s[10];
    fin.open("MyFile.txt");
    fin>>s;
    cout<<s;
    fin.close();
    return 0;   
}