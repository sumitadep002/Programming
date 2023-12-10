/*Write a function to calculate nth term of the Fibonacci series using recursion. Write another 
function to print given number of terms of Fibonacci series. */
#include<stdio.h>
int fibonacci(int n)
{
    if(n<=1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
void printfibonacci(int terms){
    int i;
    for(int i=1;i<=terms;i++){
        printf(" %d ",fibonacci(i));
    }
    printf("\n");
}
int main()
{
    int n, numTerms;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth term of the Fibonacci series is %d\n", n, fibonacci(n));
    printf("Enter the number of terms to print: ");
    scanf("%d", &numTerms);
    printf("The first %d terms of the Fibonacci series are: ", numTerms);
    printfibonacci(numTerms);
    return 0;
}
