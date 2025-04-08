#include <stdio.h>
#include <stdlib.h>

typedef enum
{
	NAM,
	NU
} gioi_tinh_t;
const char* gioi_tinh_str[] = { "Nam", "Nu" };

typedef enum
{
	GIOI,
	KHA,
	TRUNG_BINH,
	YEU
} loai_t;
const char* loai_str[] = { "Gioi", "Kha", "Trung binh", "Yeu" };

typedef struct
{
	const char* ten;
	int tuoi;
	gioi_tinh_t gioi_tinh;
	float diem_toan;
	float diem_van;
	loai_t loai;
} hoc_sinh_t;

void xep_loai(hoc_sinh_t* arr, int  so_luong)
{
	float diem_tb = 0;
	for (int i = 0; i < so_luong; i++)
	{
		diem_tb = (arr[i].diem_toan + arr[i].diem_van) / 2;
		if (diem_tb >= 8)
		{
			arr[i].loai = GIOI;
		}
		else if (diem_tb >= 6.5)
		{
			arr[i].loai = KHA;
		}
		else if (diem_tb >= 5)
		{
			arr[i].loai = TRUNG_BINH;
		}
		else
		{
			arr[i].loai = YEU;
		}
	}
}

void In_ds(hoc_sinh_t* arr, int so_luong)
{
	for (int i = 0; i < so_luong; i++)
	{
		printf("Ten: %s\n", arr[i].ten);
		printf("Tuoi: %d\n", arr[i].tuoi);
		printf("Gioi tinh: %s\n", gioi_tinh_str[arr[i].gioi_tinh]);
		printf("Diem toan: %.2f\n", arr[i].diem_toan);
		printf("Diem van: %.2f\n", arr[i].diem_van);
		xep_loai(arr, so_luong);
		printf("Xep loai: %s\n",loai_str[arr[i].loai]);
	}
}

void main()
{
	hoc_sinh_t arr[] = {
		{"Nguyen Van A", 18, NAM, 8.5, 9.0},
		{"Nguyen Van B", 19, NU, 7.0, 6.5},
		{"Nguyen Van C", 20, NAM, 6.0, 5.5},
		{"Nguyen Van D", 21, NU, 4.5, 4.0}
	};
	xep_loai(arr, 4);
	In_ds(arr, 4);
}
