#include <stdio.h>

void main()
{
    double P, A; 
    double r = 8.2 / 100; 
    int n;  
    printf("Nhap so tien gui ban dau: ");
    scanf_s("%lf", &P);
    printf("Nhap so nam gui tien: ");
    scanf_s("%d", &n);
    A = P;
    for (int i = 0; i < n; i++) {
        A = A  + A*r;
	}
    printf("So tien nhan duoc sau %d nam la: %.2lf VND\n", n, A);
}   