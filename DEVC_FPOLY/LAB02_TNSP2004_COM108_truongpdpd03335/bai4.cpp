// : XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
#include <stdio.h>
int main()
{
    float a, b, c, dtb;
    printf(": XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH \n");
    printf("nhap vao diem 3 mon toan. ly, hoa:  ");
    scanf("%f %f %f", &a, &b, &c);
    dtb = (a + b + c) / 3;
    printf("DTB: %f", dtb);
    return 0;
}