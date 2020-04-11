#include<stdio.h>
int main(){
    float diem;
    printf("nhap diem cua sinh vien:");
    scanf("%f",&diem);
        if(diem>=9)
        printf("xuatsac");
         if(diem<9&&diem>=8)
        printf("gioi");
         if(diem<8&&diem>=6.5)
        printf("kha");
         if(diem<6.5&&diem>=5)
        printf("trungbinh");
         if(diem<5&&diem>=3.5)
        printf("yeu");
         if(diem<3.5)
        printf("kem");
return 0;
}