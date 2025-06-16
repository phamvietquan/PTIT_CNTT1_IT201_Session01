#include <stdio.h>

int main(void) {
    int n;
    printf("nhap so n");
    scanf("%d",&n);
    // c1: dungf for
    int sum1 =0;
    for (int i=1;i<n;i++) {
        sum1+=i;
    }// độ phức tạp là O(n)
    // c2: dùng công thức toán cấp số cộng
    int sum2 =n*(n+1)/2;
    // độ phức tạp là O(1)
}