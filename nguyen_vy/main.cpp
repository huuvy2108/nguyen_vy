#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Nhap so tu nhien n: ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i += 1) {
        sum += i;
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
}