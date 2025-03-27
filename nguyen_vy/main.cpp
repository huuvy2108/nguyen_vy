#include <stdio.h>
#include <string.h>

typedef struct {
	char ten[50];
	int tuoi;
	char gioitinh[10];
	float diem_toan;
	float diem_van;
	float diem_tb;
	int xep_loai;
}hoc_sinh_t;

void nhap_hoc_sinh(hoc_sinh_t* hs) {
    printf("Nhap ten: ");
    scanf_s("%49s", hs->ten, 50);

    printf("Nhap tuoi: ");
    scanf_s("%d", &hs->tuoi);

    printf("Nhap gioi tinh: ");
    scanf_s("%9s", hs->gioitinh,10);

    printf("Nhap diem toan: ");
    scanf_s("%f", &hs->diem_toan);

    printf("Nhap diem van: ");
    scanf_s("%f", &hs->diem_van);

    hs->diem_tb = (hs->diem_toan + hs->diem_van) / 2;

    if (hs->diem_tb >= 8) hs->xep_loai = 1;
    else if (hs->diem_tb >= 6.5) hs->xep_loai = 2;
    else if (hs->diem_tb >= 5) hs->xep_loai = 3;
    else hs->xep_loai = 4;
}

void in_danh_sach(hoc_sinh_t hs[], int n) {
    printf("\nDanh sach hoc sinh:\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s | Tuoi: %d | Gioi tinh: %s | Toan: %.2f | Van: %.2f | TB: %.2f | Xep loai: %d\n",
            hs[i].ten, hs[i].tuoi, hs[i].gioitinh, hs[i].diem_toan, hs[i].diem_van, hs[i].diem_tb, hs[i].xep_loai);
    }
}

void in_hs_diem_cao_nhat(hoc_sinh_t hs[], int n) {
    float max = hs[0].diem_tb;
    for (int i = 1; i < n; i++) {
        if (hs[i].diem_tb > max) {
            max = hs[i].diem_tb;
        }
    }
    printf("\nHoc sinh co diem trung binh cao nhat:\n");
    for (int i = 0; i < n; i++) {
        if (hs[i].diem_tb == max) {
            printf("%s \n",
                hs[i].ten);
        }
    }
}

void sap_xep_hs_theo_diem(hoc_sinh_t hs[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (hs[i].diem_tb < hs[j].diem_tb) {
                hoc_sinh_t temp = hs[i];
                hs[i] = hs[j];
                hs[j] = temp;
            }
        }
    }
}

void main() {
    int n;
    hoc_sinh_t ds[] = {0};

    printf("Nhap so luong hoc sinh: ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin hoc sinh thu %d:\n", i + 1);
        nhap_hoc_sinh(&ds[i]);
    }

    in_danh_sach(ds, n);
    in_hs_diem_cao_nhat(ds, n);

    sap_xep_hs_theo_diem(ds, n);
    printf("\nDanh sach hoc sinh sau khi sap xep theo diem trung binh:\n");
    in_danh_sach(ds, n);

}
