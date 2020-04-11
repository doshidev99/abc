#include <stdio.h>
void hoanvi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("\nNhap a = ");
    scanf("%d", &a);
    printf("\nNhap b = ");
    scanf("%d", &b);
    printf("Ban da nhap:\na = %d \nb = %d\n", a, b);
    hoanvi(&a, &b);
    printf("sau khi goi ham hoanvi:\na = %d \nb = %d\n", a, b);
    return 0;
}