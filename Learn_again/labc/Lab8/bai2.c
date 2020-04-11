#include<stdio.h>
struct phanso{
	int TS;
	int MS;
};
void nhapphanso(phanso,&x);
{
	printf("\nNhap vao tu so ");
	scanf("%d", &tu);
	do
	{
		printf("\nNhap vao mau so ");
		scanf("%d", &mau);
		if(ps.mau==0)
			printf("\nMau phai khac khong\nVui long kiem tra lai");
	}while(ps.mau==0);
}

//Viet hàm xuat
void xuatphanso(phanso ps)
{
	printf("Phan so: %d / %d",ps.tu,ps.mau);
}
// tinh tong
void phanso tongps(phanso a,phanso b);
{
	phanso tong;
	tong.tu=a.tu*b.mau+b.tu*a.mau;
    tong.mau=a.mau*b.mau;
	rutgon(tong);
	return tong;
}
//Viet hàm tính hieu
 void phanso hieups(phanso a,phanso b)
{
	phanso h;
	h.tu=a.tu*b.mau-b.tu*a.mau;
    h.mau=a.mau*b.mau;
	rutgon(h);
	return h;
}
//Viet hàm tính tích
void phanso tichps(phanso a,phanso b)
{
	phanso tich;
	tich.tu=a.tu*b.tu;
	tich.mau=a.mau*b.mau;
	rutgon(tich);
	return tich;
}
//Viet hàm tính thuong
void phanso thuongps(phanso a,phanso b)
{
	phanso thuong;
	thuong.tu=a.tu*b.mau;
	thuong.mau=a.mau*b.tu;
	rutgon(thuong);
	return thuong;
}
	void main()
{
	phanso x,y;
	printf("\nNhap phan so thu nhat ");
	nhapphanso(x);
	xuatphanso(x);
	printf("\nNhap phan so thu 2");
	nhapphanso(y);
	xuatphanso(y);
	phanso tong= tongps(x,y);
	printf("\n tong ");
	xuatphanso(tong);
	phanso hieu=hieups(x,y);
	printf("\nHieu ");
	xuatphanso(hieu);
	phanso tich=tichps(x,y);
	printf("\nTich ");
	xuatphanso(tich);
	phanso thuong=thuongps(x,y);
	printf("\nThuong ");
	xuatphanso(thuong);
	return 0;
	
}