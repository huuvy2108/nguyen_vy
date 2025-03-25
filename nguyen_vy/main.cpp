#include <stdio.h>

// Chức năng: Nhân 2 phân số
// input: 
// Phân số thứ nhất
// Phân số thứ hai
// Output: Kết quả phép tính
struct phan_so {
	int tu;
	int mau;
};
struct phan_so Nhan_phan_so(struct phan_so x, struct phan_so y) {
	struct phan_so kq;
	kq.tu = x.tu * y.tu;
	kq.mau = x.mau * y.mau;
	return kq;
}

void main() {
	struct phan_so x, y;
	printf("Nhap 2 phan so: \n");
	scanf_s("%d%d%d%d", &x.tu, &x.mau, &y.tu, &y.mau);
	struct phan_so kq = Nhan_phan_so(x, y);
	printf("%d/%d", kq.tu, kq.mau);
}