#include <stdio.h>

void main()
{
    char str_1[100];
	int i = 0;
    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

    while (str_1[i] != '\0') {
        if (str_1[i] >= 'a' && str_1[i] <= 'z') {
			str_1[i] = str_1[i] - ('a' - 'A');
		}
        i++;
    }
    printf("Chuoi sau khi chuyen thanh in hoa: %s\n", str_1);
}