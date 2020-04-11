#include <stdio.h>
int main()
{
    float a, b;
    printf("\nNhap he so a:");
    scanf("%f", &a);
    printf("\nNhap he so b:");
    scanf("%f", &b);
    if (a == 0)
    { //neu a==0 thi
        if (b == 0)
        { //neu b==0
            printf("\nphuong trinh vo so nghiem");
        }
        else
        { //neu b!=0
            printf("\nphuong trinh vo nghiem");
        }
    }
    else //neu a!=0
        printf("\nphuong trinh co nghiem x=%g", -b / a);
    return 0;
}
