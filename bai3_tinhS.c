#include<stdio.h>

long giaithua(int n);
int x,n;
long s=1;

int main()
{
//tính giai thừa


    printf("tính: S(x,n)=1-x+x^3/3!...\n");
    printf("nhập vào X:");
    scanf("%d",&x);
    printf("nhập vào n:");
    scanf("%d",&n);
    for(int i=0;i=<n;i++){
    s=s+(-1)^(i+1)*x^(2*i+1)/giaithua(2*i+1);
    }
   printf("kết quả là S=%d",s);
    
    
    
}
long giaithua(int n){
if(n==1)
return 1;
return n*giaithua(n-1);
}