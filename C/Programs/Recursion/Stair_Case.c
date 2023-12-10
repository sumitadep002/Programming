/*
there are n number of stairs, find how many ways to reach at the top
rules: 1 or 2 or 1 and 2can be taken at once
*/

#include<stdio.h>
int stair(int n);
int fact(int n);
int main()
{
int stair_num;
printf("Enter the number of stairs: ");
scanf("%d",&stair_num);

printf("%d\n",stair(stair_num));

return 0;
}

int stair(int n)
{
if(n==1||n==2)
return n;

return stair(n-1)+stair(n-2);
}

/*
		n!
	------------------ 1 + 5!/4! + 4!/(2!*2!) + 1 = 1+1+5+6 = 13
	    (n-r)!*r!
*/


/*
1->1
2->2
3->{(1,1,1), (1,2), (2,1)}->3
4->{(1,1,1,1), (1,1,2), (1,2,1), (2,1,1), (2,2)}->5
5->{(1,1,1,1,1), (1,1,1,2), (1,1,2,1), (1,2,1,1), (2,1,1,1), (1,2,2), (2,1,2), (2,2,1)}->8
6->{(1,1,1,1,1,1), (1,1,1,1,2), (1,1,1,2,1), (1,1,2,1,1), (1,2,1,1,1), (2,1,1,1,1), (1,1,2,2), (1,2,1,2), (2,1,1,2), (2,1,2,1), (1,2,2,1), (2,2,1,1),(2,2,2)}->13

*/
