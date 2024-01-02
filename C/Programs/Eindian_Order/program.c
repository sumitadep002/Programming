#include <stdio.h>
#include <stdint.h>
int main() {
    uint32_t test = 1;

    if (*(uint8_t*)&test == 1) {
        printf("Little-endian\n");
    } else {
        printf("Big-endian\n");
    }

    return 0;
}

