#include <stdio.h>
int main(){
	int x, i;
	printf("Nhap so x:");
	scanf("%d", &x);
	while(i * i <= x){
		if(i * i == x){
			printf("So %d la so chinh phuong.", x);
			return 0;
		}
		i++;
	}
	printf("So %d khong phai la so chinh phuong.", x);
}