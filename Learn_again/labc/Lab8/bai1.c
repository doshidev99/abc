#include<stdio.h>
int main(){
struct SinhVien {
 char msv[50];
 char tenSV[50];
 char nganhHoc[50];
 float diemTB;
}SV[50];
int i,n;
printf("Nhap vap sinh vien moi:");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("\nNhap Ho ten SV: ");
    scanf("%49s",&SV[i].tenSV[i]);
    printf("\nNhap MSV: ");
    scanf("%49s",&SV[i].msv[i]);
    printf("\nNhap Chuyen nganh: ");
    scanf("%s49",&SV[i].nganhHoc[i]);
    printf("\nNhap diem: ");
    scanf("%f",&SV[i].diemTB);
}
for(i=0;i<n;i++){
    printf("MSSV: %s\n",SV[i].tenSV);
    printf("TenSV: %s\n",SV[i].msv);
    printf("Chuyen nganh: %s\n",SV[i].nganhHoc);
    printf("Dtb : %.1f\n",SV[i].diemTB);
}
}