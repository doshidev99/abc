// XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆNTÍCH HCN
#include <stdio.h>
int main()
{
    float a, b, s, p;
    printf("XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆNTÍCH HCN \n");
    printf("nhap vao canh a, b: ");
    scanf("%f %f", &a, &b);
    s = a * b;
    printf("Dien tich : %f \n", s);
    p = (a + b) / 2;
    printf("Chu vi %f \n", p);
    return 0;
}