#include <stdio.h>
int main()
{
    float a;
    printf("nhap so dien tieu thu trong thang:");
    scanf("%f", &a);
    if (a > 0 && a <= 50)
        printf("so tien dien can phai dong la:%0.0f dong", a * 1678);
    else if (a > 50 && a <= 100)
        printf("so tien dien can phai dong la:%0.0f dong", a * 1734);
    else if (a > 100 && a <= 200)
        printf("so tien dien can phai dong la:%0.0f dong", a * 2014);
    else if (a > 200 && a <= 300)
        printf("so tien dien can phai dong la:%0.0f dong", a * 2536);
    else if (a > 300 && a <= 400)
        printf("so tien dien can phai dong la:%0.0f dong", a * 2834);
    else
        printf("so tien dien can phai dong la:%0.0f dong", a * 2927);
    return 0;
}
