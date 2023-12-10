/*
Write a function to implement four function calculator. Function would take operands and 
operator as arguments and returns result. 
*/
#include<stdio.h>
int calculator(int op1,int op2,char op);
int main()
{
    int op1,op2;
    char op;
    printf("enter the number1: ");
    scanf("%d",&op1);
    printf("enter the number2: ");
    scanf("%d",&op2);
    printf("enter the operator: ");
    scanf(" %c",&op);

    printf("result=%d\n",calculator(op1,op2,op));
    return 0;
}
int calculator(int op1,int op2,char op)
{
    switch(op)
    {
        case '+':return (op1+op2);
        case '-':return (op1-op2);
        case '*':return (op1*op2);
        case '/':if(op2 == 0)
        {
        printf("0 is not a valid donminator\ninvalid ");
		return -1;
        }
        		return (op1/op2);
    }
}
