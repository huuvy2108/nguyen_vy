#include <stdio.h>

typedef struct {
	int tu;
	int mau;
}phan_so_t;

// Chức năng: Cộng 2 phân số
// input: 
// Phân số thứ nhất
// Phân số thứ hai
// Output: Kết quả phép tính
phan_so_t Cong_phan_so(phan_so_t x, phan_so_t y) {
	phan_so_t kq;
	kq.tu = x.tu * y.mau + y.tu * x.mau;
	kq.mau = x.mau * y.mau;
	return kq;
}

void main() {
	phan_so_t x = { 1, 2 }, y = { 3, 4 };
	phan_so_t kq = Cong_phan_so(x, y);
	printf("%d/%d\n", kq.tu, kq.mau);
}