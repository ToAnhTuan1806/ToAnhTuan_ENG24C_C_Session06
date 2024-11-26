#include<stdio.h>

int main(){
	int passWord = 1357;
	int user;
	
	printf("Hay nhap mat khau co bon chu so: ");
	scanf("%d", &user);
	
	while (user != passWord) {
		printf("Mat khau sai roi\n");
		printf("\nNhap lai mat khau: ");
		scanf("%d", &user);
		
	}
	
	printf("Mat khau dung roi!!!");
	return 0;
}
