#include "iostream"

class Myarray {
public:
	int* data;
	int size;
	Myarray(int s) {
		size = s;
		data = new int[size];
		for (int i = 0; i < size; ++i)
			data[i] = 0;
	}
	~Myarray() {
		delete[] data;
	}
	int& operator[](int index) {
		if (index < 0 || index >= size) {
			std::cerr << "Loi: chi so vuot gioi han!\n";
			exit(1);
		}
		return data[index];
	}
	int getSize() {
		return size;
	}
};

void main() {
	Myarray a(5);
}
