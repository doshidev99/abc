#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	printf("nhap vao gia tri n:");
	scanf ("%d", &n);
	int i, mang[n];
	for( i = 0;i < n;i++){
		printf("mang[%d]=", i);
		scanf("%d", & mang[i]);
	}
	int j,temp;
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			if(mang[i]>mang[j]){
				temp = mang[i];
				mang[i] = mang[j];
				mang[j] = temp;
			}
		}
	}
	printf("mang[%d] sau khi sap xep:", n);
	for(i = 0;i < n;i++)
     	printf("vi tri thu mang [%d] la : %d \n",i,mang[i]);
return 0;
}