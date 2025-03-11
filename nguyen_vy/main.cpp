#include <stdio.h>

void main()
{
	int i = 0, tien;
	int soto50 = 0;
	int soto100 = 0;
	int soto200 = 0;
	int soto500 = 0;
	int sotien = 0;
	printf("Nhap so tien can rut: \n");
	scanf_s("%d", &tien);
    while (sotien < tien) 
    {
        if (sotien + 50 <= tien) 
        {
            soto50++;
            sotien += 50;
        }
        if (sotien + 100 <= tien) 
        {
            soto100++;
            sotien += 100;
        }
        if (sotien + 200 <= tien) 
        {
            soto200++;
            sotien += 200;
        }
        if (sotien + 500 <= tien) 
        {
            soto500++;
            sotien += 500;
        }
	}
	printf("So to 50: %d\n", soto50);
	printf("So to 100: %d\n", soto100);
	printf("So to 200: %d\n", soto200);
	printf("So to 500: %d\n", soto500);
}