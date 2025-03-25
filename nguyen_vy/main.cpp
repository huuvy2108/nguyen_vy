#include <stdio.h>

typedef struct {
	int tu;
	int mau;
}phan_so_t;

// Chức năng: Tìm phân số lớn nhất
// input: 
//	Địa chỉ bắt đau của phân số
//	Số lượng phần tử của mảng
// Output: Phân số lớn nhất
phan_so_t phan_so_lon_nhat(phan_so_t* mang, int n) {
	phan_so_t max = mang[0];
	for (int i = 1; i < n; i++) {
		if (mang[i].tu * max.mau > max.tu * mang[i].mau) {
			max = mang[i];
		}
	}
	return max;
}

void main() {
	phan_so_t mang_1[] = {
	{1, 2 },
	{ 2, 3 },
	{ 3, 4 },
	{ 4, 5 },
	{ 5, 6 }
	};
	phan_so_t C = phan_so_lon_nhat(mang_1, 5);
	printf("Phan so lon nhat la: %d/%d", C.tu, C.mau);
}