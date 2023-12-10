#include<iostream>
using namespace std;

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

printf("Bin %ld\n",bin_num);
}


int main()
{

int n;
cout<<"Enter the number in decimal: ";
cin>>n;

D2B(n);
//cout<<rev(n);

return 0;
}
