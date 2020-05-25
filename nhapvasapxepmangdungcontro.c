#include<stdio.h>

const int n=15;

int main()
{
    int arr[n];
    int *p_tem;

    //nhập dữ liệu
    for(int i = 0; i < n; i++) {
        printf("nhập vào giá trị nguyên thứ %d: ",i+1);
        scanf("%d",&p_tem);
        arr[i] = p_tem;
    }

    //sắp xếp
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++ ) {
            //sắp xếp giảm
            if(arr[j]<arr[j+1]) {
                p_tem = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = p_tem;
            }
        }
    }

    //in ket qua
    for(int i=0; i<n; i++) {
        printf("địa chỉ ô nhớ %d có giá trị là: %d \n",i+1,arr[i]);
    }

}