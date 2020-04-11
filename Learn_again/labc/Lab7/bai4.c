#include <stdio.h>
#include <string.h>

int main() {
    		int Chucnang;
	do {
        void Menu(){
	printf("\nNhap vao chuc nang can xu li: ");
	scanf("%d", &Chucnang);
	switch(Chucnang){

		case 1:
			printf("1. Kiem tra so nguyen\n");
            Chucnang1();
			break;

		case 2:
			printf("2. Tim uoc chung va boi chung vua 2 so\n");
            Chucnang2();
			break;

		case 3:
			printf("3. Chuong trinh tinh tien cho quan karaoke\n");
            Chucnang3();
			break;

		case 4:
			printf("4. Tinh tien dien\n");
            Chucnang4();
			break;
		case 5:
			printf("5. Chuc nang doi tien\n");
            Chucnang5();
			break;

		case 6:
			printf("6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
            Chucnang6();
			break;

		case 7:
			printf("7. Xay dung chuong trinh vay tien mua xe\n");
            Chucnang7();
			break;

		case 8:
			printf("8. Sap xep thong tin sinh vien\n");
            Chucnang8();
			break;

		case 9:
			printf("9. Xay dung game  FPOLY-LOTT (2/15)\n"); 
            Chucnang9();
			break;

		case 10:
			printf("10. Xay dung chuong trinh tinh toan phan so\n");
            Chucnang10();
			break;
		case 0:
			printf("Thoat\n"); 
			break;
		default:
		    printf(" Yeu cau nhap lai\n");

}
}while (Chucnang == 0); 
printf("Ket thuc chuong trinh ...\n");
	return 0; 
}
void  Menu (){
	printf("\n**********Aggsignment**********: ");
	printf("\n1. Kiem tra so nguyen");
	printf("\n2. Tim uoc chung va boi chung vua 2 so");
	printf("\n3. Chuong trinh tinh tien cho quan karaoke");
	printf("\n4. Tinh tien dien");
	printf("\n5. Chuc nang doi tien");
	printf("\n6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop");
	printf("\n7. Xay dung chuong trinh vay tien mua xe");
	printf("\n8. Sap xep thong tin sinh vien");
	printf("\n9. Xay dung game FPOLY-LOTT (2/15)");
	printf("\n10. Xay dung chuong trinh tinh toan phan so");
	printf("\n0. Thoat chuong trinh");
}
void Chucnang1(){
	int CP(int So);
int NT(int So);
int main(){
	int So, sont, socp, son;
	printf("Nhap so nguyen x muon kiem tra:");
	scanf("%d", &So);
	socp = CP(So);
	sont = NT(So);
	if(So == 0){
		printf("So 0 la so nguyen.");
	}
	else if(socp == 1){
		printf("So %d la so chinh phuong.", So);
    }
    else if (sont == 1){
    	printf("So %d la so nguyen to.", So);
	}
	else if(socp == 2 || sont == 2){
		printf("So %d la so nguyen.", So);
	}    
    return 0;
}
int CP(int So){
	int i, socp = 0;
	while(i * i <= So){
        if(i * i == So){
            socp = 1;
            return socp;
        }
        ++i;
    }
    socp = 2;
    return socp;
}
int NT(int So){
	int i, count = 0, sont = 0;
	if (So < 2){
        sont = 2;
        return sont;
    }
    for(i = 2; i < So; i++){
        if(So % i == 0){
            count++;
        }
    }
    if(count == 0){
        sont = 1;
    }
	else
        sont = 2;
    return sont; 
	}
}
void chucNang2(){
    int USCLN(int a,int b){
    if(b == 0)return a;
    return USCLN(b , a % b);}
int BSCNN(int a,int b){
    return(a * b) / USCLN(a, b);}

int main() {
 int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    printf("USCLN cua %d va %d la: %d\n", a, b, USCLN(a, b));
    printf("BCNN cua %d va %d la: %d\n", a, b, BSCNN(a, b));
    return 0;
}
void Chucnang3(){
	int main(){
    int gioBD,gioKT;
    printf("Xin moi nhap gio bat dau:");
    scanf("%d",&gioBD);
    printf("Xin moi nhap gio ket thuc:");
    scanf("%d",&gioKT);
    int sogiohat = gioKT - gioBD;
    double tienthanhtoan;
    int giothem;
    double tienthem;
    if(sogiohat<=3){
        tienthanhtoan = sogiohat *150000;
    }else{
        giothem = sogiohat -3;
        tienthem = giothem * 150000 * 0.7;
        tienthanhtoan = 3 * 150000 + tienthem;
    }
    if(gioBD>=14 && gioBD<=17)
    tienthanhtoan = tienthanhtoan * 0.9;
    printf("So tien quy khach can thanh toan : %.lf",tienthanhtoan);
return 0 ;
}
}
void Chucnang4(){
	int main (){
    double  soKWH;
    printf("Xin moi nhap vao so KWH:");
    scanf("%lf",&soKWH);
    double tiendien;
    double bac1 = 1678;
    double bac2 = 1734;
    double bac3 = 2014;
    double bac4 = 2536;
    double bac5 = 2834;
    double bac6 = 2927;
    if (soKWH<=50){
        tiendien = soKWH * bac1;
    }else if (soKWH<=100){
        tiendien = 50 * bac1 +(soKWH-50)*bac2;
    }else if (soKWH<=200){
        tiendien = 50 * bac1 +50 * bac2+(soKWH-100)*bac3;
    }else if (soKWH<=300){
        tiendien = 50 * bac1 +50 * bac2 +100 * bac3 + (soKWH-200)*bac4;
    }else if (soKWH<=400){
        tiendien = 50 * bac1 +50 * bac2 +100 * bac3 + 100 * bac4+(soKWH-300)*bac5;
    }else {
        tiendien = 50 * bac1 +50 * bac2 +100 * bac3 + 100 * bac4 + 100 * bac5+(soKWH-400)*bac6;      
}
printf("So tien dien quy khach phai tra la : %0.lf\n",tiendien);
return tien ;
}
} 
void Chucnang5(){
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
void Chucnang6(){
	int main(){
    double tienvay;
    printf("Chao mung ban den voi cong ty Tan Tu!!!!\n");
    printf("Co vay phai co tra!!!!\n");
   	printf("Quy khach muon vay bao nhieu: ");
	scanf("%lf",&tienvay);
    double tongtien;
	int kyhan = 12;
    double laisuat = 0.05;
    double tienlaihangthang;
    double tiengochangthang = tienvay/kyhan;
    double tongtienhangthang;
    int i;
    for ( i = 1; i <= kyhan; i++){
        tienlaihangthang = tienvay * laisuat;
        tongtienhangthang = tienlaihangthang + tiengochangthang;
        tongtien +=tongtienhangthang;
        tienvay=tienvay - tiengochangthang;
        printf("So tien can tra trong thang:%d\n",i);
        printf("%.0lf\t%.0lf\t%.0lf\t%.0lf\n",tienlaihangthang,tiengochangthang,tongtienhangthang,tienvay);
    }
    printf("Tong tien quy khach phai tra sau 12 thang la: %.2lf vnd\n",tongtien);
    return 0; 
	}
}
void Chucnang7(){
	int tienVay(float phanTramVay){
	int vayCoDinh = 500;
	int thoiHanVay = 24;
	float traTruoc;
	traTruoc = vayCoDinh*(100 - phanTramVay)/100;
	printf("SO TIEN BAN PHAI TRA TRUOC LA: %f", traTruoc);
	float conLai;
	conLai = vayCoDinh - traTruoc;
	float gocPhaiTra;
	gocPhaiTra = conLai/24;
	float tienTraNam = gocPhaiTra;
	float laiHangThang;
	laiHangThang = conLai * 7.2/100;
	float phaiTraTungThang;
	int i;
	for(i =0; i < thoiHanVay; i++){
		tienTraNam = gocPhaiTra + laiHangThang;
		phaiTraTungThang = tienTraNam/12;
		printf("Lai: %f, TienPhaiTra: %f, TienTraHangThang: %f, sau %d nam\n", laiHangThang, tienTraNam, phaiTraTungThang, i+1);
		laiHangThang = laiHangThang - gocPhaiTra * 7.2/100;
	}
}
float phanTramVay;
	printf("NHAP VAO SO PHAN TRAM BAN MUON TRA GOP: ");
	scanf("%f", &phanTramVay);
	tienVay(phanTramVay);
}
void Chucnang8(){
	struct SinhVien{
		char mssv[50];
		char tenSV[50];
		char nganhHoc[50];
		float diemTB; 
	}
	
	mangSV[50];
	
	char searchMSSV[50];
	int i, j, n;
	printf("NHAP SO SINH VIEN BAN MUON THEM: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("XIN MOI NHAP THONG TIN SINH VIEN [%d]:\n", i);
		printf("Nhap ten SV : \n");
		fflush(stdin);
		gets(mangSV[i].tenSV);
		printf("Nhap MSSV : \n");
		scanf("%s",&mangSV[i].mssv);
		printf("Nhap Nganh Hoc : \n");
		fflush(stdin);
		gets(mangSV[i].nganhHoc);
		printf("Nhap diemTB : \n");
		scanf("%f",&mangSV[i].diemTB);
	}
		
	printf("-----THONG TIN SINH VIEN BAN VUA NHAP VAO HE THONG LA-----:\n");
	for(i = 0; i < n; i++){
		printf("TenSV [%d]: %s\n", i, mangSV[i].tenSV);
		printf("MSSV [%d]: %s\n", i, mangSV[i].mssv);
		printf("NganhHoc [%d]: %s\n", i,mangSV[i].nganhHoc);
		printf("Diem TB [%d]: %f\n", i, mangSV[i].diemTB);
		printf("====================================\n");
	}
	
	
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(mangSV[i].diemTB < mangSV[j].diemTB){
				struct SinhVien svTemp;
				svTemp=mangSV[j];
				mangSV[j] = mangSV[i];
				mangSV[i] = svTemp;
			}
		}
	}
		printf("----THONG TIN SINH VIEN SAU KHI SAP XEP THEO DIEM TB LA----:\n");
	
	for(i=0;i<n;i++){
		printf("Ho ten SV: %s\t",mangSV[i].tenSV);
		printf("Ma So SV: %s\t",mangSV[i].mssv);
		printf("Nganh Hoc SV: %s\t",mangSV[i].nganhHoc);
		printf("Diem TB: %.1f\n",mangSV[i].diemTB);
		if(mangSV[i].diemTB>=9){
			printf("Hoc luc: Xuat sac!\n");
		}else if(mangSV[i].diemTB>=8){
			printf("Hoc luc: Gioi!\n");
		}else if(mangSV[i].diemTB>=6.5){
			printf("Hoc luc: Kha!\n");
		}else if(mangSV[i].diemTB>=5){
			printf("Hoc luc: Trung binh!\n");
		}else{
			printf("Hoc luc: Yeu!\n");
		}
	}
	printf("Nhap MSSV can tim: ");
	scanf("%s", &searchMSSV);
    for(i = 0; i < n; i++){
        if(strcmp(searchMSSV, mangSV[i].mssv) == 0){
        	printf("\nTen SV:%s...\nMSSV: %s...\nNganh Hoc:  %s...\nDiemTB:%0.1f\n", mangSV[i].tenSV, mangSV[i].mssv, mangSV[i].nganhHoc, mangSV[i].diemTB);
        if(mangSV[i].diemTB>=9){
			printf("Hoc luc: Xuat sac!\n");
		}else if(mangSV[i].diemTB>=8){
			printf("Hoc luc: Gioi!\n");
		}else if(mangSV[i].diemTB>=6.5){
			printf("Hoc luc: Kha!\n");
		}else if(mangSV[i].diemTB>=5){
			printf("Hoc luc: Trung binh!\n");
		}else{
			printf("Hoc luc: Yeu!\n");
		}
            	}
        	}
        getch();
        
}

void Chucnang9(){
	int fGame(int a, int b, int so1, int so2){
	int i;
	for(i = 0; i < 1; i++){
		so1 = 1 + rand() % (15);
	}
	for(i = 0; i < 1; i++){
		so2 = 1 + rand() % (15);
	}
	if(a == so1 || a == so2 || b == so1 || b == so2){
		printf("CHUC MUNG BAN DA TRUNG GIAI NHI");
	}
	else if(a== so1 || a == so2 && b == so1 || b == so2){
	printf("CHUC MUNG BAN DA TRUNG GIAI NHAT");
	}
	else{
		printf("CHUC BAN MAY MAN LAN SAU");
	}
}
int a, b, so1, so2;
	printf("Moi ban nhao vao 2 so bat ky:");
	printf("\nSo thu nhat: ");
	scanf("%d", &a);
	printf("So thu hai: ");
	scanf("%d", &b);
	fGame(a, b, so1, so2);
}

void Chucnang10(){
	int UCLN(int a, int b)
        {
            return (b == 0)?a : UCLN(b, a%b);
        }
        
	typedef struct{
    	int tu;
    	int mau;
    }
		PHANSO;
    	PHANSO toiGian(PHANSO a){
        PHANSO c;
        c.tu = a.tu / UCLN(a.tu, a.mau);
        c.mau = a.mau / UCLN(a.tu, a.mau);
        return c;
    }

    PHANSO cong(PHANSO a, PHANSO b){
    	PHANSO c;
    	c.tu = a.tu * b.mau + a.mau * b.tu;
    	c.mau = a.mau * b.mau;
    	toiGian(c);
    	return c;
    }

    PHANSO tru(PHANSO a, PHANSO b){
    	PHANSO c;
    	c.tu = a.tu * b.mau - a.mau * b.tu;
    	c.mau = a.mau * b.mau;
    	toiGian(c);
    	return c;
    }

    PHANSO nhan(PHANSO a, PHANSO b){
        PHANSO c;
        c.tu = a.tu * b.tu;
        c.mau = a.mau * b.mau;
        c = toiGian(c);
        return c;
    }



    PHANSO chia(PHANSO a, PHANSO b){
        PHANSO c;
        c.tu = a.tu * b.mau;
        c.mau = a.mau * b.tu;
        c = toiGian(c);
        return c;
    }

    void xuat(PHANSO a){
    printf("%d/%d", a.tu, a.mau);
    }

        PHANSO a, b, c;
        printf("Nhap vao lan luot tu va mau cua phan so a:\n");
        scanf("%d%d", &a.tu, &a.mau);
        printf("Nhap vao lan luot tu va mau cua phan so b:\n");
        scanf("%d%d", &b.tu, &b.mau);
        printf("\nPhan so a toi gian: ");
        a = toiGian(a);
        xuat(a);
        printf("\nphan so b toi gian: ");
        b = toiGian(b);
        xuat(b);
        printf("\nTong cua hai phan so: ");
        c = cong(a, b);
        xuat(c);
        printf("\nHieu cua hai phan so: ");
        c = tru(a, b);
        xuat(c);
        printf("\nTich cua hai phan so: ");
        c = nhan(a, b);
        xuat(c);
        printf("\nThuong cua hai phan so: ");
        c = chia(a, b);
        xuat(c);
        return 0;
    }

