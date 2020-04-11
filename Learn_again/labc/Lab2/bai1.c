#include <stdio.h>
int main ()
{
    float a,b,c,d;

    printf("nhap so a:");
    scanf("%f",&a);
    printf("nhap so b:");
    scanf("%f",&b);
    c=a+b;
    d=a-b;
    printf("tong hai so a,b la:%f\n",c);
    printf("hieu hai so a,b la:%f",d);
    return 0;
}