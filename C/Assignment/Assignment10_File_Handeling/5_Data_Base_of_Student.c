/*
. Create database of students which will store student name, roll_no & standard details. Store 
that details in files using fprintf() and get it using fscanf(). Data should be accessible between 
multiple execution of the program
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define DATABASE_FILENAME "student_db.txt"

struct student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    int standard;
};

void print_menu() {
    printf("\nDatabase Menu:\n");
    printf("1. Add student\n");
    printf("2. Display all students\n");
    printf("3. Exit\n");
}

void add_student(FILE* db) {
    struct student s;
    printf("\nEnter student name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter standard: ");
    scanf("%d", &s.standard);
    fprintf(db, "%s %d %d\n", s.name, s.roll_no, s.standard);
    printf("Student added to database.\n");
}

void display_all_students(FILE* db) {
    struct student s;
    rewind(db);
    printf("\n%-20s %-20s %-20s\n", "Name", "Roll No", "Standard");
    while(fscanf(db, "%s %d %d", s.name, &s.roll_no, &s.standard) != EOF) {
        printf("%-20s %-20d %-20d\n", s.name, s.roll_no, s.standard);
    }
}

int main() {
    FILE* db;
    int choice;

    // Open the database file for appending
    db = fopen("student_database.txt", "a+");
    if (db == NULL) {
        printf("Error opening database file.\n");
        exit(1);
    }

    while (1) {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice) {
            case 1:
                add_student(db);
                break;
            case 2:
                display_all_students(db);
                break;
            case 3:
                printf("\nExiting program.\n");
                fclose(db);
                return 0;
            default:
                printf("\nInvalid choice. Try again.\n");
                break;
        }
    }
}