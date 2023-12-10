#include<stdio.h>
enum month {January=1,February,March,April,May,June,July,August,November,December};
typedef month month;
int main()
{
    month m;
    printf("%d/%d/%d",1,December,2023); //we can refer word instead of numbers, which makes code less complex and will increase readability
    return 0;
}