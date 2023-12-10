#include <stdio.h>
union A
{
    int x;
    float y;
    double z;
    int arr[2];
};

union B
{
    int x;
    short int y;
    char ch;
    char carr[4];
};
union A a1;
union B b1;

int main()
{
    a1.y = 6.25f;
    printf("x=%x\n", (unsigned int)a1.x);
    a1.z = 0.15625;
    printf("%x%x\n", (unsigned int)a1.arr[1], (unsigned int)a1.arr[0]);
    b1.x = 0x41;
    return 0;
}