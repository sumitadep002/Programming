#include<stdio.h>
#include<stdlib.h>
void D2B(int n);
int main()
{
int number=0b01001001;
D2B(number);
number=(number&(~(1<<3))); //
D2B(number);


return 0;
}


void D2B(int n)
{

char bin_arr[32];
int temp_num=n;
long bin_num=0;
int i=32;
while(temp_num)
{
bin_arr[--i]=(temp_num%2)+48;
temp_num = temp_num/2;
}

while(i<32)
{
if(bin_arr[i++]=='0')
bin_num = bin_num*10;
else
bin_num = bin_num*10 + 1;
}

printf("\nBin %ld\n",bin_num);
}
