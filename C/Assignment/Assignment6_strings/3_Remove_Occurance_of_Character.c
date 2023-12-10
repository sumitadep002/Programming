/*
 Write a function to remove all occurrences of given character from the string.
*/
#include <stdio.h>
#include <string.h>

void remove_char(char *str, char ch) {
    int len = strlen(str);
    int i, j;
    
    //this will simply replace the specified character with it's successors
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "hello world";
    remove_char(str, 'l');
    printf("%s\n", str);
    return 0;
}
