/*Write a program to print following pattern. 
a. Using multiple printf statements 
b. Using single printf statement 
* 
** 
*** 
**** 
*****  */
#include<stdio.h>
int main()
{
//using multiple printf statements
	printf("using multiple printf statements\n");
   for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)      
        printf(" * ");
        printf("\n");
    }

//using single printf statements
	printf("using single printf statements\n");
    printf(" * \n *  * \n *  *  * \n *  *  *  * \n *  *  *  *  * \n");   

    return 0;
}
