//Input a number and display whether number is Even or Odd

#include<stdio.h>
int main()
{
    int number;
    
    printf("enter the number: ");
    scanf("%d",&number);

    if(number!=0)
    {
        if(number%2==0)
        printf("number %d is even\n",number);

        else
        printf("number %d is odd\n",number);
    }
    else 
    printf("number %d is zero\n",number);
    return 0;
}
