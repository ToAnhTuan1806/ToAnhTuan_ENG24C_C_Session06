#include<stdio.h>

int main() {
// B1 Khai bao cac bien day, month, year, leapYear
    int day, month, year;
    int leapYear = 0;
    
// B2 Nhap du lieu cho bien month va year
    printf("Nhap vao thang tu 1 den 12: ");
    scanf("%d", &month);
    printf("Nhap vao nam: ");
    scanf("%d", &year);
    
// B3 Xu ly dieu kien
// B3.1 Kiem tra thang hop le
    if(month < 1 || month > 12) {
        printf("Thang nhap khong hop le, vui long nhap lai thang tu 1 den 12.\n");
        return 1;
    }

// B3.2 Kiem tra nam nhuan
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        leapYear = 1; 
    }

// B3.3 Kiem tra so ngay trong thang
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31; 
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30; 
            break;
        case 2:
            if (leapYear) {
                day = 29; 
                printf("Day la nam nhuan\n");
            } else {
                day = 28; 
            }
            break;
        default:
            
            break;
    }

// B4 In ra man hinh
    printf("Thang %d nam %d co %d ngay\n", month, year, day);
// B5 Ket thuc
    return 0;
}

