#include <iostream>
using namespace std;
string removeDuplicate(string);
int main()
{
    string s;
    cin >> s;
    cout<<removeDuplicate(s);
    return 0;
}
string removeDuplicate(string s)
{
    string substitute;
    int i = 0,j=0;

    while (s[i] != '\0')
    {
        if (s[i] == s[i + 1])
        {
            i++;
            continue;
        }
        else
        {
            substitute+=s[i];
        }
        i++;
    }
    return substitute;
}