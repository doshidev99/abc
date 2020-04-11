// XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆNTÍCH HÌNH TRÒN
#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main()
{
    const float e = 3 * 10 ^ 8;
    float r, s, c;
    printf(" XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆNTÍCH HÌNH TRÒN \n");
    printf("nhap vao ban kinh r:  ");
    scanf("%f", &r);
    s = pow(r, 2) * PI;
    printf("Dien tich : %f \n", s);
    c = 2 * r * PI;
    printf("Chu vi %f \n", c);
    printf("%d", 3 < 2 || 6);
    // int k = 1;
    // int tong;
    // while (tong < 5)
    // {
    //     if (k % 2 = 0)
    //     {
    //         tong += k;
    //         k++
    //     }
    // }
    int i = 1;
    int m = 1;
    for (;;)
        if (i > 5)
        {
            break;
        }
    m += i;
    i++;
    printf("%d \n", m);
    return 0;
}