#include <stdio.h>

int main(void) {
    int arr[]={2,3,1,12,8,56,34,23,12,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int found =0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                found=1;
                break;
            }
        }
    }
    if (found) {
        printf("Mang co phan tu trung lap \n");
    }else
        printf("Mang khong co phan tu trung lap \n");
    return 0;
    // Độ phức tạp thời gian: O(n²)
}