/*
Write a program to copy the contents of one file to another file. (Create command like cp 
you can name it my_cp)
*/

#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char file1[50], file2[50];
    char ch;

    // Get filenames from user
    printf("Enter name of source file: ");
    scanf("%s", file1);
    printf("Enter name of destination file: ");
    scanf("%s", file2);

    // Open source file
    fp1 = fopen("a.txt", "r");
    if (fp1 == NULL) {
        printf("Unable to open the file %s\n", file1);
        return 1;
    }

    // Open destination file
    fp2 = fopen("file2.txt", "w");
    if (fp2 == NULL) {
        printf("Unable to create the file %s\n", file2);
        fclose(fp1);
        return 1;
    }

    // Copy contents of source file to destination file
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    // Close files
    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.\n");

    return 0;
}