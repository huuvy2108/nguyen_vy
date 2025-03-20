#include <stdio.h>

// Chức năng: Đếm số từ trong chuỗi
// input: Địa chỉ phần tử đầu tiên của chuỗi
// Kết quả trả về: Số từ trong chuỗi
int dem_so_tu(char* str) {
	int dem = 0, tu = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && str[i] != '\t') {
			if (tu == 0) {
				dem++;
				tu = 1;
			}
		}
		else {
			tu = 0;
		}
	}
	return dem;
}

void main() {
	char str_1[100];

	printf("Nhap chuoi: ");
	gets_s(str_1, sizeof(str_1));

	int so_tu = dem_so_tu(str_1);
	printf("So tu trong chuoi: %d\n", so_tu);
}
