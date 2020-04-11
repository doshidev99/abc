#include<stdio.h>  
int main(){  
    int mang[10],n,i;  
    printf("Nhap so thap phan muon chuyen:");  
    scanf("%d",&n);  
    for(i = 0; n > 0; i++){  
        mang[i] = n % 2;  
        n = n / 2;  
    }
    printf("Day so nhi phan la:");
    for(i = i - 1; i >= 0; i--){  
        printf("%d", mang[i]);
	}
	return 0;
}