#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("MyFile.txt");
    fout<<"Hello";
    
    return 0;   
}