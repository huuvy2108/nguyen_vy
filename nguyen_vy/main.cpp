#include <stdio.h>

void main()
{
    int n;
    printf("Nhap so nguyen: ");
    scanf_s("%d", &n);
    if (n%2 == 0) 
    {
        printf("So nay la so chan.\n");
    }
    else
    {
        printf("So nay la so le.\n");
    }
}