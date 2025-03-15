#include <stdio.h>

void main()
{
    int a, b;
    printf("Nhap hai so nguyen: \n");
    scanf_s("%d %d", &a, &b);

    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);
}  