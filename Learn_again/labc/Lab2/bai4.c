#include <stdio.h>
int main ()
{
    float toan, ly, hoa, diemtrungbinh;
    printf("nhap vao diem mon toan:");
    scanf("%f",&toan);
    printf("nhap vao diem mon ly:");
    scanf("%f",&ly);
    printf("nhap vao diem mon hoa:");
    scanf("%f",&hoa);
    diemtrungbinh = (toan*3+ly*2+hoa)/3;
    printf("diem trung binh 3 mon : %.2f\n", diemtrungbinh);
    return 0;
}