/*
Write a program that requests for a filename and an integer value which is set as an offset 
value. The program then reads the file starting from the location specified by the offset value 
and prints the contents on the screen
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char filename[MAX_LEN];
    int offset, count = 0, i;
    FILE *fp;

    // Read the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Read the offset value from the user
    printf("Enter the offset value: ");
    scanf("%d", &offset);

    // Open the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Move the file pointer to the location specified by the offset value
    if (offset >= 0) {
        char c;
        while (count < offset && (c = fgetc(fp)) != EOF) {
            if (c == '\n') {
                count++;
            }
        }
    } else {
        fseek(fp, 0, SEEK_END);
        long fileSize = ftell(fp);
        if (fileSize == -1) {
            printf("Error getting file size.\n");
            fclose(fp);
            return 1;
        }

        while (count > offset && fileSize > 0) {
            fseek(fp, --fileSize, SEEK_SET);
            if (fgetc(fp) == '\n') {
                count--;
            }
        }
    }

    // Print the contents of the file starting from the location specified by the offset value
    char line[MAX_LEN];
    while (fgets(line, MAX_LEN, fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}