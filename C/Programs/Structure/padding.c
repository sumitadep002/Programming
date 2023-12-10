#include<stdlib.h>
#include<stdio.h>
struct Example {
    char a;     // 1 byte
    int b;      // 4 bytes (assuming 4-byte alignment)
    double c;   // 8 bytes (assuming 8-byte alignment)
};
struct Example e;
int main()
{
printf("%d\n",(int)sizeof(e));
return 0;
}
