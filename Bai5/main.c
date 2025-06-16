#include <stdio.h>

int main(void) {
   int arr[]={2,5,9,7,1,4};
   for (int i=0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++) {
      for (int j=0 ; j<sizeof(arr)/sizeof(arr[0]) ; j++) {
         if (arr[j] > arr[j+1]) {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
   printf("mảng sau khi sắp xếp là:");
   for (int i=0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++) {
      printf("%d ",arr[i]);
   }
   return 0;
}// độ phức tạp là O(n^2)