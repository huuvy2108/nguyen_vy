#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_HS 100
#define MAX_LINE 256

typedef struct {
    char ten[100];
    int tuoi;
    char gioitinh[10];
    float diem1, diem2;
    float dtb;
} HocSinh;

void tinhDTB(HocSinh* hs) {
    hs->dtb = (hs->diem1 + hs->diem2) / 2.0f;
}

void hoanVi(HocSinh* a, HocSinh* b) {
    HocSinh temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    FILE* f = fopen("D:/Nguyen_Vy/DanhSachHocSinh1.csv", "r");
    if (!f) {
        printf("Không thể mở file DanhSachHocSinh1.csv\n");
        return 1;
    }

    HocSinh ds[MAX_HS];
    int n = 0;
    char line[MAX_LINE];

    while (fgets(line, MAX_LINE, f) && n < MAX_HS) {
        line[strcspn(line, "\n")] = '\0'; // Xoá newline

        char ten[100], gioitinh[10];
        int tuoi;
        float d1, d2;

        int count = sscanf(line, "%99[^,],%d,%9[^,],%f,%f", ten, &tuoi, gioitinh, &d1, &d2);
        if (count == 5) {
            strcpy(ds[n].ten, ten);
            ds[n].tuoi = tuoi;
            strcpy(ds[n].gioitinh, gioitinh);
            ds[n].diem1 = d1;
            ds[n].diem2 = d2;
            tinhDTB(&ds[n]);
            n++;
        }
        else {
            printf("Dòng sai định dạng: %s\n", line);
        }
    }
    fclose(f);

    // Tìm học sinh có điểm trung bình cao nhất
    int vitriMax = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].dtb > ds[vitriMax].dtb) {
            vitriMax = i;
        }
    }

    printf("Hoc sinh co diem trung binh cao nhat:\n");
    printf("%s - DTB: %.2f\n", ds[vitriMax].ten, ds[vitriMax].dtb);

    // Sắp xếp giảm dần theo điểm trung bình
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].dtb < ds[j].dtb) {
                hoanVi(&ds[i], &ds[j]);
            }
        }
    }

    // Ghi vào file mới
    FILE* fout = fopen("D:/Nguyen_Vy/DanhSachHocSinh_SapXep.csv", "w");
    if (!fout) {
        printf("Không thể tạo file DanhSachHocSinh_SapXep.csv\n");
        return 1;
    }

    fprintf(fout, "Ten,Tuoi,GioiTinh,Diem1,Diem2,DTB\n");
    for (int i = 0; i < n; i++) {
        fprintf(fout, "%s,%d,%s,%.1f,%.1f,%.2f\n",
            ds[i].ten, ds[i].tuoi, ds[i].gioitinh, ds[i].diem1, ds[i].diem2, ds[i].dtb);
    }
    fclose(fout);

    printf("Da ghi danh sach sap xep vao DanhSachHocSinh_SapXep.csv\n");

}