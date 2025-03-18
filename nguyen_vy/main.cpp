#include <stdio.h>

void main()
{
	char str_1[100], subStr[50];
    int  i = 0, j;
	char *ketqua = NULL;
    printf("Nhap chuoi chinh: ");
    gets_s(str_1, sizeof(str_1));

	printf("Nhap chuoi can tim: ");
	gets_s(subStr, sizeof(subStr));

    while (str_1[i] != '\0') {
        j = 0;
		while (subStr[j] != '\0' && str_1[i + j] == subStr[j]) {
			j++;
		}
        if (subStr[j] == '\0') {
            ketqua = &str_1[i];
        }
        i++;
    }
    if (ketqua != NULL) {
        printf("Chuoi \"%s\" duoc tim thay tai dia chi: %p\n ", subStr, ketqua);
    }
    else {
        printf("Chuoi '%s' khong co trong chuoi. \n", subStr);
	}
}