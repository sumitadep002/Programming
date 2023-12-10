/*Take as input N, the size of array. Take N more inputs and store that in an array. Write a 
function that bubble sorts the array. Print the elements of sorted array.
Input Format:
Constraints:
N cannot be negative. Range of Numbers can be between -1000000000 to 1000000000.
Output format:
Sample Input
4
2
-18
45
30
Sample Output
-18
2
30
45

*/
#include<iostream>
using namespace std;
void bubbleSort(int*,int);
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int *arr=new int[n];
    if(arr!=NULL)
    cout<<"\narray has been created successfully of "<<n<<" size\n";
    else
    {
        cout<<"\nERROR";
    }
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    cout<<endl<<arr[i];
    return 0;
}
void bubbleSort(int* a,int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}