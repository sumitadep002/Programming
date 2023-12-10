/*
Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Type               Size (bytes)  Format Specifier  Range\n");
    printf("----------------------------------------------------------\n");
    printf("char               %3ld           %%c               %24d		to %24d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char      %3ld           %%c               %24d 	to %24d\n", sizeof(unsigned char), 0,UCHAR_MAX);
    printf("short              %3ld           %%hd              %24d 	to %24d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short     %3ld           %%hu              %24d 	to %24d\n", sizeof(unsigned short),0, USHRT_MAX);
    printf("int                %3ld           %%d               %24d 	to %24d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int       %3ld           %%u               %24d 	to %24u\n", sizeof(unsigned int), 0,UINT_MAX);
    printf("long int           %3ld           %%ld              %24ld 	to %24ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long int  %3ld           %%lu              %24ld 	to %24lu\n", sizeof(unsigned long),(unsigned long int)0, ULONG_MAX);
    printf("unsigned long int  %3ld           %%lu              %24d 	to %24lu\n", sizeof(unsigned long), 0, ULONG_MAX);
    printf("float              %3ld           %%f               %24f 	to %24f\n", sizeof(float), -FLT_MAX + FLT_EPSILON, FLT_MAX - FLT_EPSILON);
    printf("double             %3ld           %%lf              %24lf 	to %24lf\n", sizeof(double), -DBL_MAX + DBL_EPSILON, DBL_MAX - DBL_EPSILON);
    return 0;
}
