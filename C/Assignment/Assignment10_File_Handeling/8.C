/*
Write a program which will search and replace the word in the file
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s filename search_word replace_word\n", argv[0]);
        return 1;
    }
    
    char *filename = argv[1];
    char *search_word = argv[2];
    char *replace_word = argv[3];
    
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        printf("Error: could not open file %s\n", filename);
        return 1;
    }
    
    char buffer[1024];
    int search_word_length = strlen(search_word);
    int replace_word_length = strlen(replace_word);
    int found = 0;
    
    while (fgets(buffer, sizeof(buffer), file)) {
        char *match = strstr(buffer, search_word);
        while (match != NULL) {
            found = 1;
            int position = match - buffer;
            fseek(file, -search_word_length + replace_word_length, SEEK_CUR);
            fwrite(replace_word, sizeof(char), replace_word_length, file);
            fseek(file, search_word_length - replace_word_length, SEEK_CUR);
            match = strstr(buffer + position + replace_word_length, search_word);
        }
    }
    
    fclose(file);
    
    if (!found) {
        printf("Error: could not find word %s in file %s\n", search_word, filename);
        return 1;
    }
    
    printf("Success: word %s replaced with %s in file %s\n", search_word, replace_word, filename);
    
    return 0;
}