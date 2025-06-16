#include <stdio.h>
#include <stdlib.h>
//b1
int main() {
    for (int i=0; i<5; i++) {
        printf("Hello\n");
    }
    return 0;
}// độ phức tạp thời gian là: O(n)

//b2
void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d\n",i);
        i*=2;
    }
}// độ phức tạp thời gian là: O log(n)

//b3
int * mallocArr(int n) {
    int * arr=(int*)malloc(n * sizeof(int));
    for (int i=0;i<n;i++) {
        arr[i]=i;
    }
    return arr;
}// độ phức tạp Không gian là: O(n)
