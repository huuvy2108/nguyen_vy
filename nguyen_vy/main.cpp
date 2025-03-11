#include <stdio.h>

void main()
{
    int n;
    long long giaithua = 1;
    printf("Nhap so tu nhien n: ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i += 1) 
    {
        giaithua =giaithua*i;
    }
    printf("%d! = %d\n", n, giaithua);
}