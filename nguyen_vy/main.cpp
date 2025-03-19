#include <stdio.h>

//Chức năng: Hoán vị 2 số nguyên
//input:số nguyên a, b
//Kết quả trả về: sau khi hoán vị, a = b, b = a
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void main() {
    int a, b;
    printf("Nhap hai so nguyen: \n");

    if (scanf_s("%d %d", &a, &b) != 2) {
        printf("Loi: Vui long nhap hai so nguyen!\n");
    }

    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);

}
