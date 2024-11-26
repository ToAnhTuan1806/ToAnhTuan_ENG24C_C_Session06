#include<stdio.h>

int main (){

	int num1, num2, num3, num4, num5;
	int oddSum =0, evenSum =0;
	
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
	
	if (num1%2 ==0) {
		evenSum ++;
	} else {
		oddSum ++;
	}
	if (num2%2 ==0) {
		evenSum ++;
	} else {
		oddSum ++;
	}
	if (num3%2 ==0) {
		evenSum ++;
	} else {
		oddSum ++;
	}
	if (num4%2 ==0) {
		evenSum ++;
	} else {
		oddSum ++;
	}
	if (num5%2 ==0) {
		evenSum ++;
	} else {
		oddSum ++;
	}
	
	printf("So luong so chan la: %d\n", evenSum);
	printf("So luong so le la: %d\n", oddSum);
	return 0;
	} 
	
