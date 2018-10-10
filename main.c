#include<stdio.h>
#include<stdlib.h>

int findMaxValue(int a[100],int n) {
    int m = a[1];
    for(int i = 2;i <= n;i++)
        if(m < a[i]) m = a[i];
    return m;
}

int findMinValue(int a[100],int n) {
    int m = a[1];
    for(int i = 2;i <= n;i++)
        if(m > a[i]) m = a[i];
    return m;
}
int main() {
   int a[100], n, i;
   printf("Vui lòng nhập số phần tử vào mảng:\n");
    scanf("%d",&n);
    if (n > 10) {
       printf("Số lượng phần tử phải nhỏ hơn hoặc bằng 10.\n");
       return 0;
    }
      for(i = 0;i < n; i++) {
        printf("Nhập giá trị cho phần tử thứ %d là:\n", i + 1);
        scanf("%d",&a[i]);
    }
    int choice;
      switch (choice) {
          case 1:
              printf("\n Giá trị lớn nhất: %d", findMaxValue(a, n));
              break;
          case 2:
              printf(" \n Giá trị nhỏ nhất: %d", findMinValue(a, n));
              break;
      }
    printf("\n Giá trị lớn nhất: %d", findMaxValue(a, n));
    printf(" \n Giá trị nhỏ nhất: %d", findMinValue(a, n));
    return 0;
}