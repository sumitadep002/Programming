#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("MyFile.txt",ios:app::ios:in);
    fout<<"world";
    
    return 0;   
}