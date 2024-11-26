#include <stdio.h>


int main() {
    
    int num1, num2, num3, num4, num5;
    int oddSum = 0;
    
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so nguyen ba: ");
    scanf("%d", &num3);
    printf("Nhap so nguyen thu tu: ");
    scanf("%d", &num4);
    printf("Nhap so nguyen thu nam: ");
    scanf("%d", &num5);
    
    if (num1%2 != 0) {
        oddSum += num1;
    }
    if (num2%2 != 0) {
        oddSum += num2;
    }
    if (num3%2 != 0) {
        oddSum += num3;
    }
    if (num4%2 != 0) {
        oddSum += num4;
    }
    if (num5%2 != 0) {
        oddSum += num5;
    }
    
    printf("Tong cac so le la: %d\n", oddSum);
    return 0;
}

