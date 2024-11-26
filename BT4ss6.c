#include <stdio.h>
#include <math.h>

int main() {
// B1 Khai bao bien a, b, c, x1, x2, delta
    float a, b, c, x, x1, x2, delta;
// B2 Nhap du lieu cho bien a, b, c
    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);
    printf("Nhap so c: ");
    scanf("%f", &c);
// B3 Xu ly dieu kien, xu ly tinh toan, In ra man hinh
	delta = b*b - 4*a*c;
	if(delta > 0) {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("Phuong trinh co 2 nghiem phan biet la: \nx1 = %.2f, x2 = %.2f\n", x1, x2);
		
	} else if(delta == 0) {
		x = -b / (2*a);
		printf("Phuong trinh co nghiem kep la: x = %.2f\n", x);
		
	} else {
		printf("Phuong trinh vo nghiem\n");
	}
//B4 Ket thuc
    return 0;
}

