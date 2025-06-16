#include <stdio.h>

int main() {
    int arr[]={2,1,5,9,6,3};
    int a,count=0;
    printf("Mơi ban nhap so phan tư muon dem ");
    scanf("%d",&a);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++) {
        if(arr[i]==a) {
            count++;
        }
    }
    printf("Số lần xuất hiện của %d là %d",a,count);
    return 0;
    // độ phức tạp thời gian là O(n)
    // độ phức tạp Không gian là O(1)
}