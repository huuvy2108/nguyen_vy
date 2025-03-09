#include <stdio.h>

void main()
{
    int kWh;
    double total = 0;
    printf("Nhap so kWh su dung: ");
    scanf_s("%d", &kWh);

    if (kWh < 0) 
    {
        printf("So kWh khong hop le!\n");
    }
    if (kWh <= 50) 
    {
        total = kWh * 1678;
    }
    else if (kWh <= 100) {
        total = 50 * 1678 + (kWh - 50) * 1734;
    }
    else if (kWh <= 200) {
        total = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
    }
    else if (kWh <= 300) {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
    }
    else if (kWh <= 400) {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kWh - 300) * 2834;
    }
    else {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kWh - 400) * 2927;
    }

    printf("So tien dien phai tra: %.2f VND\n", total);
}