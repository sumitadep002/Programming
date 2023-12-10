/*
Given a Number N (Denoting one of the legs of the triangle), Print its Pythagoras pair in 
increasing order if they exist. Otherwise, print “-1”
Sample Input
3
Sample Output 
4 5
*/
#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;
    
    if (n == 1 || n == 2)
        printf("No Pythagoras Triplet exists");
  
    else if (n % 2 == 0) {
  
        // Calculating for even case
        int var = n * n / 4;
        printf("Pythagoras Triplets exist i.e. ");
        printf("%d %d %d", n, var - 1, var + 1);
    }
  
    else if (n % 2 != 0) {
  
        // Calculating for odd case
        int var =  n * n + 1;
        printf("Pythagoras Triplets exist i.e. ");
        printf("%d %d %d", n, var / 2 - 1, var / 2);
    }


    return 0;
}