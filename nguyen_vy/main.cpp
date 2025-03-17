#include <stdio.h>

void main()
{
    char str_1[100];
	int dem = 0, i = 0;
    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

    while (str_1[i] != '\0') {
        if (str_1[i] == ' ') {
			dem++;
        }
        i++;
    }
    printf("So ky tu space trong chuoi la: %d\n", dem);
}