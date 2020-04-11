#include<stdio.h>
int main(){
	int n;
	printf("Nhap phan tu cua mang:");
	scanf("%d",&n);
	int i,mang[n];
	for(i=0;i<n;i++){
		scanf("%d",&mang[i]);
}
float tbt,tong=0;
int conut=0;
for(i=0;i<n;i++){
	if(mang[i]%3==0){
		tong+=mang[i];
		conut++;
}
}
tbt=tong/conut;
printf("TB tong [%d]la %f",n,tbt);
return 0;
}