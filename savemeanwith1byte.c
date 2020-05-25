#include<stdio.h>
char a=0;
char b=0;
float input;
void decoder(char n);
char encoder(float n);
int main()
{
   char g=0;
     printf("nhap so thap phan ");
    scanf("%f",&input);
    g=encoder(input);
    printf("%d\n",g);
    decoder(g);
    printf("%d,%d\n",a,b);
}
char encoder(float n){
char x=n;
char y=n*10-x*10;
return y+x*16;
}
void decoder(char n){
a=n>>4;
b=n<<4;
b=b>>4;
}