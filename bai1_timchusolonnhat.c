#include<stdio.h>

int input =0;
int max=0;


int main()
{
int i=0;
    printf("tìm chữ số lớn nhất!\n");
 l1:   printf("nhập vào số nguyên dương n nhỏ hơn 30000:");
    scanf("%d",&input);
    if((input>30000)||(input<=0)){
    printf("vui lòng nhập lại!");
    goto l1;
    }
    while(input>0){
    i=input%10;
    input/=10;
    if(i>max){
    max=i;
    }
    }
    printf("chữ số lớn nhất là:%d",max);
   
}