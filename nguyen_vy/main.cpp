#include <stdio.h>

void main()
{
    double thu_nhap, thu_nhap_chiu_thue, thue = 0;
    int so_nguoi_phu_thuoc;
    printf("Nhap tong thu nhap hang thang (trieu VND): ");
    scanf_s("%lf", &thu_nhap);
    printf("Nhap so nguoi phu thuoc: ");
    scanf_s("%d", &so_nguoi_phu_thuoc);
    thu_nhap_chiu_thue = thu_nhap - 11 - so_nguoi_phu_thuoc * 4.4;
    if (thu_nhap_chiu_thue <= 0) {
        printf("Ban khong phai dong thue thu nhap ca nhan.\n");
    }
    if (thu_nhap_chiu_thue > 80) {
        thue += (thu_nhap_chiu_thue - 80) * 0.35;
        thu_nhap_chiu_thue = 80;
    }
    if (thu_nhap_chiu_thue > 52) {
        thue += (thu_nhap_chiu_thue - 52) * 0.30;
        thu_nhap_chiu_thue = 52;
    }
    if (thu_nhap_chiu_thue > 32) {
        thue += (thu_nhap_chiu_thue - 32) * 0.25;
        thu_nhap_chiu_thue = 32;
    }
    if (thu_nhap_chiu_thue > 18) {
        thue += (thu_nhap_chiu_thue - 18) * 0.20;
        thu_nhap_chiu_thue = 18;
    }
    if (thu_nhap_chiu_thue > 10) {
        thue += (thu_nhap_chiu_thue - 10) * 0.15;
        thu_nhap_chiu_thue = 10;
    }
    if (thu_nhap_chiu_thue > 5) {
        thue += (thu_nhap_chiu_thue - 5) * 0.10;
        thu_nhap_chiu_thue = 5;
    }
    if (thu_nhap_chiu_thue > 0) {
        thue += thu_nhap_chiu_thue * 0.05;
    }
    printf("So tien thue thu nhap ca nhan phai nop: %.2lf trieu VND\n", thue);
}  