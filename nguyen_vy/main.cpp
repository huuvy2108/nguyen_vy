#include <stdio.h>

void main()
{
    int num;
    printf("Nhap so nguyen khac 0: ");
    scanf_s("%d", &num);
    if (num > 0) {
        printf("So %d la so duong.\n", num);
    }
    else if (num < 0) {
        printf("So %d la so am.\n", num);
    }
    else {
        printf("Vui long nhap lai so khac 0.\n");
    }
}