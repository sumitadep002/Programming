/*
Try the following code
print a1.x, a1.ch
Calculate size of union , offset of each member
*/
#include<stdio.h>
union A
{
int x;
int y;
char ch;
};
union A a;
int main()
{
    a.x=0x10; 
    printf("\n%x",a.x);
    a.y=0x65;
    printf("\nx %x and y %x",a.x,a.y);

}

/*
Since x and y share the same memory location in the union, 
the assignment to y overwrites the value previously assigned to x. 
Therefore, the value of x in the union is now 0x1121, which is equal to 4385 in decimal.
*/