#include <stdio.h>
int main ()
{
float a,b,p,s;
printf("nhap chieu rong:");
scanf("%f",&a);
printf("nhap chieu dai:");
scanf("%f",&b);
p=(a+b)*2;
s=a*b;
printf("chu vi hinh chu nhat la:%f\n",p);
printf("dien tich hinh chu nhat la:%f",s);
return 0;
}