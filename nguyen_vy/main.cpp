#include <stdio.h>

typedef struct {
	const char* ten;
	int tuoi;
	float diem_toan;
	float diem_van;
	float diem_tb;
	int xep_loai;
}hoc_sinh_t;

//Chức năng: Tính điểm trung bình và xếp loại học sinh
//Input: Địa chỉ bắt đầu của mảng học sinh, số lượng học sinh
//Output: Không có
void tinh_diem_tb(hoc_sinh_t* mang_hoc_sinh, int so_luong)
{
	for (int i = 0; i < so_luong; i++)
	{
		mang_hoc_sinh[i].diem_tb = (mang_hoc_sinh[i].diem_toan + mang_hoc_sinh[i].diem_van) / 2;
		if (mang_hoc_sinh[i].diem_tb >= 8)
			mang_hoc_sinh[i].xep_loai = 1;
		else if (mang_hoc_sinh[i].diem_tb >= 6.5)
			mang_hoc_sinh[i].xep_loai = 2;
		else if (mang_hoc_sinh[i].diem_tb >= 5)
			mang_hoc_sinh[i].xep_loai = 3;
		else
			mang_hoc_sinh[i].xep_loai = 4;
	}
}

//Chức năng: Tìm học sinh có điểm trung bình cao nhất
//Input: Địa chỉ bắt đầu của mảng học sinh, số lượng học sinh
//Output: Học sinh có điểm trung bình cao nhất
hoc_sinh_t hs_diem_tb_cao_nhat(hoc_sinh_t* mang_hoc_sinh, int so_luong)
{
	hoc_sinh_t hs_diem_tb_cao_nhat = mang_hoc_sinh[0];
	for (int i = 1; i < so_luong; i++)
	{
		if (mang_hoc_sinh[i].diem_tb > hs_diem_tb_cao_nhat.diem_tb)
			hs_diem_tb_cao_nhat = mang_hoc_sinh[i];
	}
	return hs_diem_tb_cao_nhat;
}

void main()
{
	hoc_sinh_t mang_hoc_sinh[] = {
		{"Nguyen Van A", 18, 7.5, 6.0},
		{"Nguyen Van B", 18, 8.8, 8.0},
		{"Nguyen Van C", 18, 5.6, 7.2},
		{"Nguyen Van D", 18, 9.0, 7.9},
		{"Nguyen Van E", 18, 6.5, 6.0},
	};
	tinh_diem_tb(mang_hoc_sinh, 5);
	hoc_sinh_t hs = hs_diem_tb_cao_nhat(mang_hoc_sinh, 5);
	printf("Hoc sinh co diem trung binh cao nhat la: %s\n", hs.ten);
}