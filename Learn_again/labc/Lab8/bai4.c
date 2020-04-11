#include <stdio.h>
int main()
{
int sotien;
int so_to_500, so_to_200, so_to_100, so_to_50,so_to_20, so_to_10 ,so_to_2, so_to_1,phandu;
printf("Xin nhap vao so tien can doi:");
scanf("%d", &sotien);
if (sotien <= 0)
{
printf("\nXin nguoi dung nhap lai so tien phai tra la:");
scanf("%d", &sotien);
}
so_to_500 = sotien / 500; 
phandu = sotien % 500; 
so_to_200 = phandu / 200; 
phandu = phandu % 200; 
so_to_100 = phandu / 100; 
phandu = phandu % 100; 
so_to_50 = phandu / 50;
phandu = phandu % 50;
so_to_20 = phandu / 20;
phandu = phandu % 20;
so_to_10 = phandu / 10;
phandu = phandu % 10;
so_to_2 = phandu / 2;
phandu = phandu % 2;
so_to_1 = phandu / 1;
phandu = phandu % 1;
printf("\nSo to 500 VND là : %d", so_to_500);
printf("\nSo to 200 VND là: %d", so_to_200);
printf("\nSo to 100 VND la: %d", so_to_100);
printf("\nSo to 50 VND la: %d", so_to_50);
printf("\nSo to 20 VND la: %d", so_to_20);
printf("\nSo to 10 VND la: %d", so_to_10);
printf("\nSo to 2 VND la: %d", so_to_2);
printf("\nSo to 1 VND la: %d", so_to_1);
return 0;
}