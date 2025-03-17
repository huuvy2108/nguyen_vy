#include <stdio.h>

void main()
{
    char str_1[100];
    int dem = 0;
    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));
    while (str_1[dem] != '\0') {
        dem++;
    }
    printf("So ky tu trong chuoi la: %d\n", dem);
}