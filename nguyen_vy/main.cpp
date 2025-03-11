#include <stdio.h>

void main()
{
    int num, error_count = 0;

    printf("Nhap cac so (nhap 0 de dung, qua 5 lan sai se thoat):\n");

    while (1) {
        scanf_s("%d", &num);
        if (num == 0) 
        {  
            printf("Da nhap 0, ket thuc chuong trinh!\n");
            break;
        }
        else if (num != 0) 
        {  
            error_count++;
        }
        if (error_count >= 5)
        {  
            printf("Ban da nhap sai qua 5 lan, thoat chuong trinh!\n");
            break;
        }
    }
}