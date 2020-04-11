#include <stdio.h>
int main()
{
    int a, b, s, h;
    printf("Chuong trinh tinh tong 2 so \n");
    printf("nhap vao a, b: ");
    scanf("%d %d", &a, &b);
    s = a + b;
    printf("tong 2 so la: %d \n", s);
    h = a - b;
    printf("tong 2 so la: %d \n", h);
    return 0;
}