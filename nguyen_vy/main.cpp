#include <stdio.h>

void main()
{
    int n;
    int arr_1[] = {0,1,2,3,4,5,6,7,8,9};
    int sum = 0, count = 0;
    for (int i = 0; i < sizeof(arr_1)/sizeof(arr_1[0]); i++) {
		if (arr_1[i] % 2 == 0) {
            sum += arr_1[i];
			count ++;
		}
    }
    if (count > 0) {
        float average = (float)sum / count;
        printf("Trung binh cong cac so le trong mang: %.2f\n", average);
    }
    else {
        printf("Khong co so le trong mang.\n");
    }
}  