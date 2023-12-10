/*
program to demonstrate function pointer
*/
#include<stdio.h>


//this function will taked function pointer as an argument
void display(void (*p)(int))  
{  
    for(int i=1;i<=5;i++)  
    {  
        p(i);  
    }  
}  
void print_numbers(int num)  
{  
    printf("number is %d\n",num);  
}  
int main()  
{  
        

    printf("The values are :\n"); 

    // here we are sending print_numbers as an argument
    display(&print_numbers);  
    return 0;  
}  