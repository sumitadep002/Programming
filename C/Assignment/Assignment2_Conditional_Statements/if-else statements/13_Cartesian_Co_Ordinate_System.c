/*
Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in 
which the point lies. Also check for special cases point lies on x-axis and y-axis.
*/

#include<stdio.h>
int main()
{
    float x,y;

    printf("enter the x co-ordinate of point: ");
    scanf("%f",&x);

    printf("enter the y co-ordinate of point: ");
    scanf("%f",&y);

    printf("\n");

    if(x!=0 || y!=0)       // check if both x and y are zero
    {

        if(x >= 0 && y >= 0)
            printf("this point is in first quandrant");

        else if(x <= 0 && y >= 0)
            printf("this point is in second quandrant");

        else if(x <= 0 && y <= 0)
          printf("this point is in third quandrant");

        else if(x >= 0 && y <= 0)
            printf("this point is in fourth quandrant");
    }
    else
    printf("this is point is origiin");

    return 0;
}
