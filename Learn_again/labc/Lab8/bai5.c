#include <stdio.h>
#include<string.h>
int main()
{
struct sinhVien{
char ten[50],msv[50],nganh[50];
float diem;
}SV[50],st;
int i,n,j;
printf("Nhap so luong sinh vien: ");
scanf("%d",&n);
printf("\t\t\t\t\tNHAP THONG TIN SINH VIEN\n");
for(i=0;i<n;i++).
{ printf("\nNhap Ho ten SV: ");
fflush(stdin);
gets(SV[i].ten);
printf("\nNhap MSV: ");
fflush(stdin);
scanf("%49s",SV[i].msv);
printf("\nNhap Chuyen nganh: ");
fflush(stdin);
gets(SV[i].nganh);
printf("\nNhap diem: ");
fflush(stdin);
scanf("%f",&SV[i].diem);
}
for(i=0;i<n;i++){
for(j=i+1;j<n+1;j++){
if(SV[i].diem>SV[j].diem){
st = SV[i];
SV[j]=SV[i];
st=SV[j];
}
}
}
printf("---------------------------------------\n");
for(i=0;i<n;i++)
{
printf("Ten sinh vien: %s\n",SV[i].ten);
printf("Ma sinh vien: %s\n",SV[i].msv);
printf("Chuyen nganh: %s\n",SV[i].nganh);
printf("Ten sinh vien: %.1f\n",SV[i].diem);
printf("-------------------------------\n");
}
return 0;
}