#include <stdio.h>

void main()
{
    int A, B;
    printf("Nhap hai so nguyen A va B: ");
    scanf_s("%d %d", &A, &B);
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    printf("Uoc so chung lon nhat la: %d\n", A);
}  