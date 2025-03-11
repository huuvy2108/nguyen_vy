#include <stdio.h>

void main()
{
    int n;
    printf("Nhap so n: ");
    scanf_s("%d", &n);
    printf("Cac so nguyen to nho hon %d la: ", n);
    for (int i = 2; i < n; i++) 
    {
        int is_prime = 1;
        for (int j = 2; j * j < n; j++) 
        {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
		if (is_prime) 
        {
			printf("%d ", i);
		}
    }
    printf("\n");
}  