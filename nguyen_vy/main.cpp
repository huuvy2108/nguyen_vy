#include <stdio.h>

void main()
{
    char str_1[100];
    int  i = 0;
    char c;
	char* diachi = NULL;
    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

	printf("Nhap ky tu can tim: ");
	scanf_s(" %c", &c, 1);

    while (str_1[i] != '\0') {
        if (str_1[i] != c) {
            diachi = &str_1[i];
        }
        i++;
    }
    if (diachi != NULL) {
        printf("Ky tu '%c' duoc tim thay tai dia chi: %p\n ", c, diachi);
    }
    else {
        printf("Ky tu '%c' khong co trong chuoi. \n", c);
	}
}