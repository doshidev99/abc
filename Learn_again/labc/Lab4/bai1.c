#include<stdio.h>
int main () {
    int i,min,max,biendem = 0;
    float tong = 0;
    printf("nhap gia tri min:");
    scanf("%d",&min);
    printf("nhap gia tri max:");
    scanf("%d",&max);
    i = min;
    while(i <= max) {
        if(i % 2 == 0) {
            tong += i;
            biendem ++;
        }
        i++;
    }
    printf("trung binh tinh tong cac so chan tu min den max =%0.2f",tong/biendem);
    return 0;
}