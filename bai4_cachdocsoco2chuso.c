#include<stdio.h>
int input=0;
int chuc=0;
int donv=0;

int main()
{
    printf("cách đọc số có 2 chữ số!\n");
 l1:   printf("nhập vào số nguyên có 2 chữ số:");
    scanf("%d",&input);
    if((input>99)||(input<10)){
    printf("vui lòng nhập vào số nguyên có 2 chữ số!");
    goto l1;
    }
    chuc=input/10;
    donv=input%10;
    printf("số đã nhập đọc là: ");
    switch (chuc)
    {
    case 1:
    printf("mười");
    break;
    case 2:
    printf("hai mươi");
    break;
    case 3:
    printf("ba mươi");
    break;
    
    case 4:
    printf("bốn mươi");
    break;
    case 5:
    printf("năm mươi");
    break;
    case 6:
    printf("sáu mươi");
    break;
    case 7:
    printf("bảy mươi");
    break;
    case 8:
    printf("tám mươi");
    break;
    case 9:
    printf("chín mươi");
    break;
    }
    switch (donv)
    {
    case 1:
    printf(" một");
    break;
    case 2:
    printf(" hai");
    break;
    case 3:
    printf(" ba");
    break;
    
    case 4:
    printf(" bốn");
    break;
    case 5:
    printf(" năm");
    break;
    case 6:
    printf(" sáu");
    break;
    case 7:
    printf(" bảy");
    break;
    case 8:
    printf(" tám");
    break;
    case 9:
    printf(" chín");
    break;
    }
}
