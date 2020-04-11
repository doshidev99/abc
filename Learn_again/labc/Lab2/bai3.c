#include <stdio.h>
#define PI 3.14159
int main()
{
float chuvi, dientich;
printf("nhap ban kinh chuvi:");
scanf("%f",&chuvi);
chuvi=2*PI*chuvi;
dientich=PI*chuvi*chuvi;
printf("chu vi hinh tron la:%f\n",chuvi);
printf("dien tich hinh tron la:%f",dientich);
return 0;
}