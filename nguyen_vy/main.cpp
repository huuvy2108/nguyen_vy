#include <stdio.h>

typedef struct {
	int tu;
	int mau;
}phan_so_t;

int UCLN(int a, int b) {
	if (a == 0 || b == 0) return a + b;
	while (a != b) {
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}

// Chức năng: Rút gọn phân số
// input: 
// Phân số
// Output: Kết quả phân số sau khi rút gọn
phan_so_t Rut_gon_phan_so(phan_so_t x) {
	int ucln = UCLN(x.tu, x.mau);
	x.tu /= ucln;
	x.mau /= ucln;
	return x;
}

void main() {
	phan_so_t x = { 6, 10 };
	phan_so_t kq = Rut_gon_phan_so(x);
	printf("%d/%d\n", kq.tu, kq.mau);
}