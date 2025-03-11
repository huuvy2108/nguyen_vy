#include <stdio.h>

void main()
{
    int a, b;
    int N = 1000;
    double h, integral = 0.0;
    printf("Nhap hai so a va b: ");
    scanf_s("%d %d", &a, &b);
    h = (double)(b - a) / N;
    integral = (a * a + b * b) / 2.0;
    for (int i = 1; i < N; i++) 
    {
        double x = a + i * h;
        integral += x * x;
    }
    integral *= h;
    printf("Gia tri tich phan tu %d den %d la: %.6lf\n", a, b, integral);
}  