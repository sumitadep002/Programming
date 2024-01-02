#include <stdio.h>
#include <stdint.h>


//data: 0x123456789A

#define DATA_SIZE 5
#define CRC8_POLYNOMIAL 0x07

uint8_t data[DATA_SIZE] = {0x12, 0x34, 0x56, 0x78, 0x9A};

// Function to calculate CRC8
uint8_t calculateCRC(uint8_t *data, int size) {
    uint8_t crc = 0xFA;
    for (int i = 0; i < size; i++) {
        crc ^= data[i];
        for (int j = 0; j < 8; j++) {
            if (crc & 0x80) {
                crc = (crc << 1) ^ CRC8_POLYNOMIAL;
            } else {
                crc <<= 1;
            }
        }
        printf("CRC: %02X\n",crc);
        
        
    }
    return crc;
}

int main() {
    // Encoding
    uint8_t crc = calculateCRC(data, DATA_SIZE);
    printf("Original Data: ");
    for (int i = 0; i < DATA_SIZE; i++) {
        printf("%02X ", data[i]);
    }
    printf("\nCRC: %02X\n", crc);

    // Decoding
    uint8_t receivedData[DATA_SIZE + 1];
    for (int i = 0; i < DATA_SIZE; i++) {
        receivedData[i] = data[i];
    }
    receivedData[DATA_SIZE] = crc;

    uint8_t decodedCRC = calculateCRC(receivedData, DATA_SIZE + 1);

    printf("Received Data: ");
    for (int i = 0; i < DATA_SIZE; i++) {
        printf("%02X ", receivedData[i]);
    }
    printf("\nDecoded CRC: %02X\n", decodedCRC);

    if (decodedCRC == 0) {
        printf("Data is intact. No errors detected.\n");
    } else {
        printf("Data integrity check failed. Errors detected.\n");
    }

    return 0;
}

