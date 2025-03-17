#include <stdio.h>

void main()
{
    char str_1[100];
    int dem = 0, i = 0;
	int tu = 0;
    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

    while (str_1[i] != '\0') {
		if (str_1[i] != ' ' && str_1[i] != '\t') {
			if (tu == 0) {
				dem++;
                tu = 1;
			}
            else {
				tu = 0;
            }
		}
        i++;
    }
    printf("So tu trong chuoi: %d\n", dem);
}