#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char str3[50];
    char str4[] = "Hello, world!";
    char str5[] = "hello, WORLD!";
    char str6[] = "reverse";
    char str7[] = "This is a sample string";
    char str8[] = "quick brown fox jumps over the lazy dog";
    char str9[] = "example string to demonstrate strncpy";
    char str10[50] = "This is a ";
    char str11[] = "long string with some data";
    char str12[] = "tokenize this string";
    char *token;

    // strlen()
    printf("Length of '%s' is %d\n", str1, (int)strlen(str1));

    // strcpy()
    strcpy(str3, str1);
    printf("After strcpy(), str3 is now '%s'\n", str3);

    // strcat()
    strcat(str3, str2);
    printf("After strcat(), str3 is now '%s'\n", str3);

    // strcmp()
    printf("Comparing '%s' and '%s' using strcmp(): %d\n", str1, str4, strcmp(str1, str4));
    
    // stricmp()
    printf("Comparing '%s' and '%s' using stricmp(): %d\n", str1, str5, stricmp(str1, str5));

    // strrev()
    printf("Reversing '%s' using strrev(): %s\n", str6, strrev(str6));

    // strchr()
    printf("First occurrence of 'a' in '%s' is at index %ld\n", str7, strchr(str7, 'a') - str7);

    // strstr()
    printf("Substring 'brown' found in '%s'\n", strstr(str8, "brown"));

    // strncpy()
    strncpy(str10 + strlen(str10), "sample string", 13);
    printf("After strncpy(), str10 is now '%s'\n", str10);

    // strncat()
    strncat(str10, " and more", 8);
    printf("After strncat(), str10 is now '%s'\n", str10);

    // strncmp()
    printf("Comparing '%s' and '%s' using strncmp(): %d\n", str1, str4, strncmp(str1, str4, 5));

    // strtok()
    printf("Tokenizing '%s':\n", str12);
    token = strtok(str12, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}