#include <stdio.h>

void main()
{
    int n;
    int arr_1[] = {0,1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for (int i = 0; i < sizeof(arr_1)/sizeof(arr_1[0]); i++) {
        sum += arr_1[i];
    }
    printf("Tong cac phan ta trong mang: %d\n", sum);
}  