#include <iostream>
using namespace std;
string replaceDuplicate(string,char);
int main()
{
    string s;
    string substitute;
    cin >> s;
    cout<<replaceDuplicate(s,'#');
    return 0;
}

string replaceDuplicate(string s,char c)
{
    int i = 1;
    string substitute;
    substitute = s[0] + substitute;
    while (s[i] != '\0')
    {
        if (s[i] != s[i - 1])
        {
            substitute += s[i];
        }
        else
        {
            substitute += c ;
        }

        i++;
    }
    return substitute;
}