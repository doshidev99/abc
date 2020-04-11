#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("menu cho 3 bai tap tren:");
	printf("\nbai1. \nbai2.\nbai3.");
	printf("\nnhap stt cua bai tap:");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("Xay dung chuong trinh tinh hoc luc cua sinh vien.");
		break;
	case 2:
		printf("Xay dung chuong trinh giai phuong trinh bac 1 va bac 2.");
		break;
	case 3:
		printf("Xay dung chuong trinh tinh tien dien trong thang.");
		break;
	default:
		printf("Khong co bai tap nay!");
	}
	return (0);
}