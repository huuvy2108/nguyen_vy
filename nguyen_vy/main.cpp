#include <stdio.h>

void tach_byte(unsigned short value) {
    unsigned char high_byte = (value >> 8) & 0xFF; 
    unsigned char low_byte = value & 0xFF;         

    printf("Byte cao: %u (0x%02X)\n", high_byte, high_byte);
    printf("Byte thap: %u (0x%02X)\n", low_byte, low_byte);
}

void main() {
    unsigned short so;
    printf("Nhap mot so nguyen 16-bit (0 - 65535): ");
    scanf_s("%hu", &so);
    tach_byte(so);
}