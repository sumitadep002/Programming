/*
Write a function to accept five names of students from the user (use array of character 
pointers). Write another function to print these names. Write a function to sort student names. 
Finally write a function to free memory allocated for student names
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 5
#define MAX_NAME_LEN 50

void get_names(char *names[MAX_NAMES]) {
    printf("Enter names of %d students:\n", MAX_NAMES);
    for (int i = 0; i < MAX_NAMES; i++) {
        names[i] = malloc(MAX_NAME_LEN * sizeof(char));
        if (names[i] == NULL) {
            printf("Error: Failed to allocate memory for name %d.\n", i+1);
            exit(1);
        }
        scanf("%s", names[i]);
    }
}

void print_names(char *names[MAX_NAMES]) {
    printf("Names of students:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }
}

void sort_names(char *names[MAX_NAMES]) {
    for (int i = 0; i < MAX_NAMES-1; i++) {
        for (int j = i+1; j < MAX_NAMES; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char *temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void free_names(char *names[MAX_NAMES]) {
    for (int i = 0; i < MAX_NAMES; i++) {
        free(names[i]);
    }
}

int main() {
    char *names[MAX_NAMES];
    get_names(names);
    sort_names(names);
    print_names(names);
    free_names(names);
    return 0;
}
