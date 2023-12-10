#include <iostream>
#include <vector>
using namespace std;
void displayAll(vector<int>&);
void addElement(vector<int>&, int);
void averageElement(vector<int>&);
int smallestNumbervector(vector<int>&);
int largestNumbervector(vector<int>& );
int main()
{
    vector<int> l;
    char choice;
    int n;
    do
    {
        cout << "\nP - Print numbers";
        cout << "\nA - Add a number";
        cout << "\nM - Display mean of the numbers";
        cout << "\nS - Display the smallest number";
        cout << "\nL - Display the largest number";
        cout << "\nQ - Quit";
        cout << "\n\nEnter your choice:";
        cin>>choice;
        cin.ignore();
        
        switch (choice)
        {
        case 'P':
        case 'p':
            displayAll(l);
            break;
        case 'A':
        case 'a':
            cout << "enter number ";
            cin >> n;
            cin.ignore();
            addElement(l, n);
            break;
        case 'M':
        case 'm':
            averageElement(l);
            break;
        case 'S':
        case 's':
            cout<<"smallest of list is "<<smallestNumbervector(l)<<endl;
            break;
        case 'L':
        case 'l':
        cout<<"largest of list is "<<largestNumbervector(l)<<endl;
            break;
        case 'Q':
        case 'q':
            cout<<"Goodbye\n";
            break;

        default:
            cout << "\nUnknown selection, please try again";
            break;
        }
    } while (choice != 'Q' && choice != 'q');

    return 0;
}

void displayAll(vector<int> &temp)
{

    if (temp.empty())
    {
        cout << "[]-the vector is empty\n";
    }
    else
    {
        
        cout << "[ ";
        for (int i=0;i<temp.size();i++)
            cout << temp[i] << " ";
        cout << "]";
        cout << '\n';
    }
}
void addElement(vector<int> &l, int n)
{
    l.push_back(n);
    cout<<n<<" added\n";
}
void averageElement(vector<int> &l)
{
    if(l.empty())
    cout<<"Unable to calculate the mean  - no data\n";
    else
    {
        int average=0,i=0;
        vector<int>::iterator iter;
        for(iter = l.begin();iter!=l.end();iter++,i++)
        average=average+(*iter);
        average=(average/i);
        cout<<"average "<<average<<endl;
    }
}
int smallestNumbervector(vector<int> &l)
{
    int smallestValue = l[0];
    
    

    if(l.empty())
    cout<<"Unable to determine the smallest number - vector is empty\n";

    for(int i=0;i<l.size();i++)
    {
        if(smallestValue > l[i])
        smallestValue = l[i];

    }
    return smallestValue;
}
int largestNumbervector(vector<int> &l)
{
    int largestValue = 0;
    
    

    if(l.empty())
    cout<<"Unable to determine the largest number - vector is empty\n";

    for(int i=0;i<l.size();i++)
    {
        if(largestValue < l[i])
        largestValue = l[i];

    }
    return largestValue;
}