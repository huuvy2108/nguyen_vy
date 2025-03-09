#include <stdio.h>
#include <math.h>

void main()
{
	float a,b,c,delta,x1,x2;
	printf("Nhap so a:\n");
	scanf_s("%f", &a);
	printf("Nhap so b:\n");
	scanf_s("%f", &b);
	printf("Nhap so c:\n");
	scanf_s("%f", &c);
	if (a==0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("Phuong trinh vo so nghiem\n");
			}
			else
			{
				printf("Phuong trinh vo nghiem\n");
			}
		}
		else
		{
			x1 = -c / b;
			printf("Phuong trinh co nghiem la: %f\n", x1);
		}
	}
	else
	{
		delta = b * b - 4 * a * c;
		if (delta < 0)
		{
			printf("Phuong trinh vo nghiem\n");
		}
		else if (delta == 0)
		{
			x1 = -b / (2 * a);
			printf("Phuong trinh co nghiem kep la: %f\n", x1);
		}
		else
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet la: %f va %f\n", x1, x2);
		}
	}

}