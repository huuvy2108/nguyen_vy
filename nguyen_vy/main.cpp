#include <stdio.h>

void main()
{
    char str_1[100];
    int  i = 0;
	int  viethoa = 1;
    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

    while (str_1[i] != '\0') {
        if (str_1[i] != ' ' && str_1[i] != '\t') 
        {
            if (viethoa == 1 && str_1[i] >= 'a' && str_1[i] <= 'z') 
            {
                str_1[i] = str_1[i] - ('a' - 'A');
            }
            viethoa = 0;
        }
        else {
			viethoa = 1;
            }
        i++;
	}
	printf("Chuoi sau khi chuan hoa: %s\n", str_1);
}