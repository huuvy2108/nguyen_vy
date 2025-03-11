#include <stdio.h>

void main()
{
    int n;
    printf("Nhap so nguyen duong (toi da 4 chu so): ");
    scanf_s("%d", &n);
    if (n < 0 || n > 9999) {
        printf("Chi ho tro so tu 0 den 9999.\n");
    }
    int hangNghin = n / 1000;
    int hangTram = (n / 100) % 10;
    int hangChuc = (n / 10) % 10;
    int hangDonVi = n % 10;

    int coSo = 0;
    int digit;  

    digit = hangNghin;
    if (digit > 0) {
        switch (digit) {
        case 1: printf("mot "); break;
        case 2: printf("hai "); break;
        case 3: printf("ba "); break;
        case 4: printf("bon "); break;
        case 5: printf("nam "); break;
        case 6: printf("sau "); break;
        case 7: printf("bay "); break;
        case 8: printf("tam "); break;
        case 9: printf("chin "); break;
        }
        printf("ngan ");
        coSo = 1;
    }
    digit = hangTram;
    if (digit > 0) {
        switch (digit) {
        case 1: printf("mot "); break;
        case 2: printf("hai "); break;
        case 3: printf("ba "); break;
        case 4: printf("bon "); break;
        case 5: printf("nam "); break;
        case 6: printf("sau "); break;
        case 7: printf("bay "); break;
        case 8: printf("tam "); break;
        case 9: printf("chin "); break;
        }
        printf("tram ");
        coSo = 1;
    }
    else if (coSo && (hangChuc > 0 || hangDonVi > 0)) {
        printf("khong tram ");
    }
    digit = hangChuc;
    if (digit > 1) {
        switch (digit) {
        case 2: printf("hai "); break;
        case 3: printf("ba "); break;
        case 4: printf("bon "); break;
        case 5: printf("nam "); break;
        case 6: printf("sau "); break;
        case 7: printf("bay "); break;
        case 8: printf("tam "); break;
        case 9: printf("chin "); break;
        }
        printf("muoi ");
    }
    else if (digit == 1) {
        printf("muoi ");
    }
    else if (digit == 0 && hangDonVi > 0 && coSo) {
        printf("le ");
    }
    digit = hangDonVi;
    if (digit > 0) {
        if (hangChuc == 1 && digit == 5) {
            printf("lam ");
        }
        else {
            switch (digit) {
            case 1: printf("mot "); break;
            case 2: printf("hai "); break;
            case 3: printf("ba "); break;
            case 4: printf("bon "); break;
            case 5: printf("nam "); break;
            case 6: printf("sau "); break;
            case 7: printf("bay "); break;
            case 8: printf("tam "); break;
            case 9: printf("chin "); break;
            }
        }
    }
}  