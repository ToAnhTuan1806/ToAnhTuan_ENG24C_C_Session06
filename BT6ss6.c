#include <stdio.h>

int main() {
// B1 Khai bao bien n, i
	int n, i;

// B2 Nhap du lieu cho n
	printf("Nhap vao so nguyen tu 1 den 100: ");
	scanf("%d", &n);
	
// B3 Xu ly dieu kien, in ra man hinh
    for ( i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
// B4 Ket thuc 
    return 0;
}

