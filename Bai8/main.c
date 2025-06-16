#include <stdio.h>

int main() {
    int arr[] = {2,4,8,5,9,1,3,6,9,1,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[1001] = {0};

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int maxCount = 0;
    int value = -1;
    for (int i = 0; i <= 1000; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            value = i;
        }
    }

    printf("Phan tu xuat hien nhieu nhat la %d (%d lan)\n", value, maxCount);

    return 0;
    // độ phức tạp về thời gian O(n)
    // độ phức tap về khng gian O(1)
}
