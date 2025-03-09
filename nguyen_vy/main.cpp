#include <stdio.h>

void main()
{
	int n = 1, pin, tien, temp = 0;
	int mk = 1234;
	while (n < 4) 
	{
		switch (n)
		{
		case 1:
			printf("Nhap ma pin: ");
			scanf_s("%d", &pin);
			if (pin == mk)
			{
				n = 2;
			}
			else
			{
				printf("Sai ma pin\n");
				temp++;
				if (temp == 3)
				{
					n = 3;
				}
			}
			break;
		case 2:
			printf("Nhap so tien can rut\n");
			scanf_s("%d", &tien);
			if (tien > 10000)
			{
				printf("So tien rut phai nho hon 10000\n");
			}
			else
			{
				printf("Ban da rut %d VND.\n", tien);
				n = 4;
			}
			break;
		case 3:
			printf("Ban da nhap sai qua 3 lan. Thoat chuong trinh\n");
			n = 4;
			break;
		}
	}
}