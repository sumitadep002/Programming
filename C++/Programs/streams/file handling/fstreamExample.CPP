#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fio;
    string s;
    fio.open("MyFile.txt",ios::out|ios::in|ios::trunc);//wil open file in read, write mode and will erase previously stored data
    while (fio)
    {
        getline(cin,s);
        if(s =="-1")
        break;
        fio<<s<<endl;
    }
    fio.close();
    
    return 0;
}