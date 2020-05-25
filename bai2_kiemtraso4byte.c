#include<stdio.h>
const long max=2147483647;
long input=0;

int main()
{
int i=0;
long j=0;

    printf("kiểm tra số nguyên 4byte có thuộc dạng 3^k hay không!\n");
   l1: printf("nhập vào số nguyên tối đa 4byte:");
    scanf("%d",&input);
    //4byte du lieu co gia tri toi da la:2147483647
    if(input>max){
    printf("vui lòng nhập số nguyên có kiểu dữ liệu 4 byte!");
    goto l1;
    }
    while(input>1){
    j=input/3;
    i+=1;
    if((j*3)!=input){
    i=0;
    break;
    }
    input=j;
    }
    if(i==0)
    {
    printf("số đã nhập không có dạng 3^k!");
    
    }
    else
    printf("số đã nhập có dạng 3^%d",i);
    
}