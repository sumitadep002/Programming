#include<stdio.h>
#define MAX 128
int main()
{
const int max = 128;
char array[max];
char string[MAX];
array[0] = string[0] = 'A';
printf("%c %c ",array[0],string[0]);
return 0;
}
