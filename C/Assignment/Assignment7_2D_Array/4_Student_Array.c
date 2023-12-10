/*
Write a function to accept five names of students from the user (use 2D array). Write another
function to print these names. Finally write a function to sort student names.
*/
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 20

// function to accept student names
void acceptNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    printf("Enter names of %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        gets(names[i]);
    }
}

// function to print student names
void printNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    printf("Student names:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%s\n", names[i]);
    }
}

// function to sort student names in ascending order
void sortNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    char temp[MAX_NAME_LENGTH];
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = i + 1; j < MAX_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];
    acceptNames(names);
    printNames(names);
    sortNames(names);
    printf("Student names in sorted order:\n");
    printNames(names);
    return 0;
}