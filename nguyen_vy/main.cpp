#include <iostream>

class Phuongtrinhbac2 {
private:
	double a, b, c; 
public:
	Phuongtrinhbac2() : a(0), b(0), c(0) {}
	void Nhap() {
		std::cout << "Nhap he so a: ";
		std::cin >> a;
		std::cout << "Nhap he so b: ";
		std::cin >> b;
		std::cout << "Nhap he so c: ";
		std::cin >> c;
	}

	void Giaipt() {
		if (a == 0) {
			if (b == 0) {
				if (c == 0) {
					std::cout << "Phuong trinh co vo so nghiem." << std::endl;
				}
				else {
					std::cout << "Phuong trinh vo nghiem." << std::endl;
				}
			}
			else {
				std::cout << "Phuong trinh co 1 nghiem: x = " << -c / b << std::endl;
			}
		}
		else {
			double delta = b * b - 4 * a * c;
			if (delta > 0) {
				double x1 = (-b + sqrt(delta)) / (2 * a);
				double x2 = (-b - sqrt(delta)) / (2 * a);
				std::cout << "Phuong trinh co 2 nghiem phan biet: x1 = " << x1 << ", x2 = " << x2 << std::endl;
			}
			else if (delta == 0) {
				double x = -b / (2 * a);
				std::cout << "Phuong trinh co nghiem kep: x = " << x << std::endl;
			}
			else {
				std::cout << "Phuong trinh vo nghiem." << std::endl;
			}
		}
	}
};

void main() {
	Phuongtrinhbac2 pt;
	pt.Nhap();
	pt.Giaipt();
}