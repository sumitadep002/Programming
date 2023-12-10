/*
Take as input a 2D array. Wave print it column-wise
Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample output
11,21,31,41,42,32,22,12,13,23,33,43,44,34,24,14
*/
#include<iostream>
using namespace std;
int** arr2D(int x,int y)
{
    int **P;
    P=new int*[x];
    
    for(int i=0;i<x;i++)
    {
        P[i]=new int[y];
    }
    
    return P;
}
int main()
{
    int row=0,column=0;
    printf("enter the number of rows and column respectively use space as seperator: ");
    cin>>row>>column;
    
    int **arr=arr2D(row,column);

    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>arr[i][j];
            cin.ignore();
        }
    }
    cout<<endl<<endl<<"__________________entered array elements____________________\n";
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        printf("\n");
    }
    
    return 0;
}