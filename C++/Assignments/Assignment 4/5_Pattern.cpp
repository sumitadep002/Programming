/*Take N (number of rows), print the following pattern (for N=4).
1           1
1 2       2 1
1 2 3   3 2 1
1 2 3 4 3 2 1

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        c=0;
        
        for(int j=0;j<(2*n-1);j++)
        {
            if(j<n)
            c++;
            else
            c--;


            if(j<=i || j>=(2*n-2-i))
            cout<<" "<<c<<" ";
            else 
            cout<<"   ";
            
            
            
        }
        cout<<endl;
    }
    return 0;
}