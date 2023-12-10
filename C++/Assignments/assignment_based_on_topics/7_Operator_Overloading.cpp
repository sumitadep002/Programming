#include <iostream>
using namespace std;
class Mystring
{
public:
    string s;
    Mystring(string );
    
    Mystring(){};
    Mystring operator-();
   

    bool operator==(Mystring );
    
    bool operator!=(Mystring );
    
    bool operator>(Mystring );
    
    bool operator<(Mystring );
    
    Mystring operator+(Mystring );
    
    int operator+=(Mystring);
    
    string operator*(int);
    
    void operator*=(int);
};
int main()
{

    string str1;
    string str2;

    cin >> str1;
    // cin>>str2;

    Mystring s1(str1);
    Mystring s2(str2);
    Mystring temp = (-s1);
    cout << temp.s;

    return 0;
}
Mystring::Mystring(string str)
{
    s = str;
}
Mystring Mystring::operator-()
{
    Mystring temp;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    temp.s = s;

    return temp;
}

bool Mystring::operator==(Mystring str)
{
    int i;
    for (i = 0; str.s[i] != '\0'; i++)
    {
        if (str.s[i] != s[i])
            return false;
    }

    return true;
}
bool Mystring::operator!=(Mystring str)
{
    int i;
    for (i = 0; str.s[i] != '\0'; i++)
    {
        if (str.s[i] != s[i])
            return true;
    }
    return false;
}
bool Mystring::operator>(Mystring str)
{
    int i, j;
    for (j = 0; str.s[j] != '\0'; j++)
        ;
    for (i = 0; s[i] != '\0'; i++)
        ;

    if (i < j)
        return 1;
    else
        return 0;
}
bool Mystring::operator<(Mystring str)
{
    int i, j;

    for (j = 0; str.s[j] != '\0'; j++)
        ;
    for (i = 0; s[i] != '\0'; i++)
        ;

    if (i < j)
        return 1;
    else
        return 0;
}
Mystring Mystring::operator+(Mystring str)
{
    Mystring temp;
    temp.s = s + str.s;
    return temp;
}
int Mystring::operator+=(Mystring str)
{

    s = s + str.s;
}
string Mystring::operator*(int n)
{
    string temp;
    for (int i = 0; i < n; i++)
        temp = temp + s;
    return temp;
}
void Mystring::operator*=(int n)
{
    string temp;
    for (int i = 0; i < n; i++)
        temp = temp + s;
    s = temp;
}