/*
Create an anonymous structure, create some variables from this 
(with & without typedef)
*/
#include<stdio.h>
struct anom{
    int a;
    char b;
};
#if 0
typedef struct anom anom;
#endif
int main()
{
    anom A;
    printf("enter the number into a ");
    scanf("%d",&A.a);
    printf("enter the character into b ");
    scanf("%c",&A.b);
    printf("\n%d and %c",A.a,A.b);

    return 0;
}