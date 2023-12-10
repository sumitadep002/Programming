/*
Write a program which will delete specified character from the file
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], ch, target;
    int count = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);
    printf("Enter the character to delete: ");
    scanf(" %c", &target);

    fp = fopen(filename, "r+");
    if (fp == NULL) {
        printf("Error opening file.");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch != target) {
            fputc(ch, fp);
        } else {
            count++;
        }
    }

    fclose(fp);

    printf("Deleted %d occurrences of character '%c' from file '%s'.", count, target, filename);

    return 0;
}