#include<stdio.h>
int input;
char str[100];
char c=0;
void conv2bi(int n);
void conv2de(char n[100]);
int main()
{
while(1){
    printf("lựa chọn chuyển đổi:\n1-thập phân sang nhị phân.\n2-nhị phân sang thập phân.\n");
    scanf("%d",&c);
    switch (c) {
    case 1:
        printf("nhập vào số thập phân muốn chuyển đổi: ");
        scanf("%d",&input);
        conv2bi(input);
        break;
    case 2:
        printf("nhập vào số nhị phân (0bxxxxxxxx): ");
        scanf("%s",&str);
        conv2de(str);
        break;
    }
    c=0;
}
}
void conv2bi(int n) {
    char j=128;
    printf("%d được chuyển sang hệ nhị phân là: 0b",n);
    for(char i=0; i<8; i++) {
        if((n&j)==0)printf("0");
        else printf("1");
        j=j>>1;
    }
    printf("\n");
}
void conv2de(char n[100]) {
    char kq=0;
    for(char i=0; i<7; i++) {
        if(n[i+2]=='1')
            kq=kq|1;
        kq=kq<<1;
    }
    printf("%s được chuyển sang hêj thập phân là: %d\n",str,kq);
}