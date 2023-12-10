/*
ios::in input/read
ios::out output/write
ios::app append
ios::ate update/modify
ios::binary read/write in binary
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    string s;
    fin.open("MyFile.txt", ios::in);
    for (int i = 1; i < 11; i++)
    {
        getline(fin,s);
        
        cout<<s<<endl;
    }
        fin.close();
        return 0;
    }