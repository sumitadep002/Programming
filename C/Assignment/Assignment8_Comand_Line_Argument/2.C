#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void print_help(char *app_name) {
    printf("Usage: %s [OPTIONS]\n", app_name);
    printf("Options:\n");
    printf("\t-u, --username\t\tUsername (mandatory)\n");
    printf("\t-p, --password\t\tPassword (mandatory)\n");
    printf("\t-e, --encrypt\t\tEnable encryption (optional)\n");
    printf("\t-h, --help\t\tDisplay this help and exit\n");
}

int main(int argc, char *argv[]) {
    char *app_name = argv[0];
    char *username = NULL;
    char *password = NULL;
    bool encrypt = false;

    // Parse arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-u") == 0 || strcmp(argv[i], "--username") == 0) {
            if (i + 1 < argc) {
                username = argv[++i];
            } else {
                printf("Invalid arguments\n");
                print_help(app_name);
                return 1;
            }
        } else if (strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "--password") == 0) {
            if (i + 1 < argc) {
                password = argv[++i];
            } else {
                printf("Invalid arguments\n");
                print_help(app_name);
                return 1;
            }
        } else if (strcmp(argv[i], "-e") == 0 || strcmp(argv[i], "--encrypt") == 0) {
            encrypt = true;
        } else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            print_help(app_name);
            return 0;
        } else {
            printf("Invalid arguments\n");
            print_help(app_name);
            return 1;
        }
    }

    // Check if username and password are provided
    if (username == NULL || password == NULL) {
        printf("Invalid arguments\n");
        print_help(app_name);
        return 1;
    }

    // Print the arguments
    printf("App name: %s\n", app_name);
    printf("Username: %s\n", username);
    printf("Password: %s\n", password);
    printf("Encryption: %s\n", encrypt ? "Yes" : "No");

    return 0;
}