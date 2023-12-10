/*
Write a function to which accepts a number, base and character pointer and converts number to
a string i.e. simulate itoa()

*/


#include <stdio.h>
#include <string.h>

void reverse(char *s) {
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, int base, char *s) {
    int i = 0, sign = n;
    if (sign < 0) {
        n = -n;
    }
    
    //stroring the each digit in the form of character in reverse order
    do {
        s[i++] = n % base + '0';
    } while ((n /= base) > 0);
    
    
    //setting the appropriate sign
    if (sign < 0) {
        s[i++] = '-';
    }

    s[i] = '\0';
    
    //reverse the string to see number properly
    reverse(s);
}

int main() {
    int n ;
    printf("Enter the number: ");
    scanf("%d",&n);
    int base = 10;
    char s[33];
    itoa(n, base, s);
    printf("n = %d, s = %s\n", n, s);
    return 0;
}
