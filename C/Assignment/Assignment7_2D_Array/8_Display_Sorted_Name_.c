//Modify above program to display names in sorted order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// comparison function for qsort
int cmpstr(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main(int argc, char *argv[]) {
    // sort the names using qsort
    qsort(argv+1, argc-1, sizeof(char*), cmpstr);

    // display the sorted names
    printf("Sorted names:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
