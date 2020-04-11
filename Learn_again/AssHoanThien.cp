#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//Ham dung de kiem tra so chinh phuong trong bt 1.
int checkCP(int So){
	int i, socp = 0;
	while(i * i <= So){
        if(i * i == So){
            socp = 1;//La so chinh phuong.
            return socp;
        }
        i++;
    }
    socp = 2;//Khong phai la so chinh phuong.
    return socp;
}
//Ham dung de kiem tra so nguyen to trong bt 1.
int checkNT(int So){
	int i, count = 0, sont = 0;
	if (So < 2){
        sont = 2;//Khong phai so nguyen to.
        return sont;
    }
    for(i = 2; i < So; i++){
        if(So % i == 0){
            count++;
        }
    }
    if(count == 0){
        sont = 1;//La so nguyen to.
    }
	else
        sont = 2;//Khong phai so nguyen to.
    return sont;    
}
//Ham tim uoc chung lon nhat cua 2 so o bai so 2.
int uscMAX(int a, int b){
	int i, usc = 0;
    for(i = 1; i <= a || i <= b; i++){
       if( a % i == 0 && b % i == 0 ){
       usc = i;
       }
    }
    return usc;
}
//Ham tim boi so chung nho nhat cua 2 so o bai so 2.
int bscMIN(int a, int b){
	int max, step, bsc = 0;
	//Tim so lon nhat trong 2 so.
    if(a > b){
      max = step = a;
      }
    else
      max = step = b;
    while(1){
        if(max % a == 0 && max % b == 0){
           bsc = max;
           break;    
        }
        max += step;
    }
   return bsc;
}
//Ham tinh tien gio trong quan karaoke o bai so 3.
int tienkaraoke(float dau, float cuoi){
	float tien;
	float gio = cuoi - dau;
	if(dau >= 14 && dau <= 17 && gio <= 3){
		tien = (gio * 150000) * 0.9;
		return tien;
	}
	else if(dau >= 14 && dau <= 17 && gio > 3){
		tien = (450000 + ( gio - 3) * (150000  * 0.7)) * 0.9;
		return tien;
	}
	else if(dau < 14 || dau > 17 && gio > 3){
	    tien = 450000 + ( gio - 3) * (150000  * 0.7);
	    return tien;
    }
    else if(dau < 14 || dau > 17 && gio <= 3){
       tien = gio * 150000;
	   return tien;
    }
}
//Ham tinh tien dien theo muc kWh da su dung o bai tap 4.
int tiendienthang(float dien){
	int tiendien;
	//Tinh tien dien theo tung nat thang dien tieu thu.
	if (dien>0 && dien<=50)
	   tiendien=dien*1678;
	else if (dien>50 && dien<=100)
	   tiendien=dien*1734;
	else if (dien>100 && dien<=200)
	   tiendien=dien*2014;
	else if (dien>200 && dien<=300)
	   tiendien=dien*2536;
	else if (dien>300 && dien<=400)
	   tiendien=dien*2834;
	else
	   tiendien=dien*2927;
	return tiendien;                  
}
//Ham doi so tien da nhap theo menh gia 500, 200, 100, 50, 20, 10, 5, 2, 1 o bai so 5.
void Doitien(int tiendoi){
    int tien500, tien200, tien100, tien50, tien20, tien10, tien5, tien2, tien1;
    tien500 = tiendoi / 500000;
	tiendoi -= (500000 * tien500);//So tien con lai sau khi doi qua 1 menh gia.
    tien200 = tiendoi / 200000; 
	tiendoi -= (200000 * tien200);
    tien100 = tiendoi / 100000; 
	tiendoi -= (100000 * tien100);
    tien50 = tiendoi / 50000; 
	tiendoi -= (50000 * tien50);
    tien20 = tiendoi / 20000; 
	tiendoi -= (20000 * tien20);
    tien10 = tiendoi / 10000; 
	tiendoi -= (10000 * tien10);
    tien5 = tiendoi / 5000; 
	tiendoi -= (5000 * tien5);
    tien2 = tiendoi / 2000; 
	tiendoi -= (2000 * tien2);
    tien1 = tiendoi / 1000; 
	tiendoi -= (1000 * tien1);
	//In ra so to tien cac menh gia da duoc doi.
    printf("\nSo tien cua ban duoc doi thanh:");
    printf("\n500.000vnd:%d to.", tien500);
    printf("\n200.000vnd:%d to.", tien200);
    printf("\n100.000vnd:%d to.", tien100);
    printf("\n50.000vnd:%d to.", tien50);
    printf("\n20.000vnd:%d to.", tien20);
    printf("\n10.000vnd:%d to.", tien10);
    printf("\n5.000vnd:%d to.", tien5);
    printf("\n2.000vnd:%d to.", tien2);
    printf("\n1.000vnd:%d to.", tien1);
}
//Ham tinh tien lai hang thang trong 1 nam voi lai suat 5% o bai so 6.
void tienlai(int tienvay){
	float tienlai =tienvay*5/100;
	float tiengoc, tientra, tongtien;
	int i;
	float sotienconlai=tienvay-(tienvay/12);
	for(i=1;i<=12;i++){
	    tiengoc = tienvay / 12;
		tientra = tiengoc + tienlai;
	    printf("Ky han %d : %0.0f vnd.\n",i, tientra);
		tienlai -= tiengoc*5/100;//Tien lai thang tiep theo.
		sotienconlai -= tiengoc;//So tien con lai sau khi tra.
		tongtien += tientra;//Tong so tien can phai tra trong suot 1 nam.
		}
	printf("Tong so tien ban phai tra trong 12 thang (lai suat 5%%): %0.0f vnd.", tongtien);	
}
//Ham tinh so tien ban phai tra truoc va tra hang thang trong 224 nam khi vay von mua xe o bai 7.
void tienmuaxe(float phantramvay){
	float phantramtra, tientratruoc, tienvayxe, tientranam, tienlainam, tiengocnam, tongnam, tiencon;
	phantramtra = (100 - phantramvay) / 100;
    tientratruoc = 500000000 * phantramtra;
    printf("So tien phai tra truoc : %0.0f vnd.\n", tientratruoc);
    tienvayxe =500000000 - (500000000 * phantramtra);
	tienlainam = tienvayxe*7.2/100;//Tien lai cua  nam.
	tiencon=tienvayxe-(tienvayxe/24);
	int i;
	for(i=1;i<=24;i++){
	    tiengocnam = tienvayxe / 24;
		tientranam = tiengocnam + tienlainam;
	    printf("Nam thu %d : %0.0f vnd.   Tra hang thang cua nam thu %d : %0.0f vnd.\n",i, tientranam, i, tientranam / 12);
		tienlainam -= tiengocnam*7.2/100;
		tiencon -= tiengocnam;
		tongnam += tientranam;//Tong tien tra trong 24 nam.
		}
	printf("Tong so tien ban phai tra trong 24 nam (7.2%%/nam): %0.0f vnd.", tongnam);
}
//Tao cau truc du lieu rieng cho thong tin sinh vien o bai 8.
typedef struct
{
    char tensv[30];
    char mssv[10];
    char lop[10];
    float dtb;
}*sinhvien, svtam;//Kieu du lieu moi gom con tro ten sinhvien va kieu du lieu ten svtam.
//Ham nhap thong tin sinh vien theo kieu sinhvien o bai 8.
void nhapsv(sinhvien &SV, int n){
    int i, j;
    for(i = 0; i < n; i++){
        printf("Ho ten sinh vien thu %d : ", i + 1);
        scanf("%s", SV[i].tensv);
        printf("Ma so sinh vien %d: ", i + 1);
        scanf("%s", SV[i].mssv);
        printf("Diem trung binh sinh vien thu %d : ", i + 1);
        //Neu nhap diem am hoac lon hon 10 se phai nhap lai.
        do{
        scanf("%f", &SV[i].dtb);
        if(SV[i].dtb < 0 || SV[i].dtb > 10){
            printf("Nhap lai dtb : ");
        }   
    }while(SV[i].dtb < 0 || SV[i].dtb > 10);
    }
    //Hoan vi thong tin sinh vien theo diem trung binh cua sinh vien do tu cao den thap.
    for(i = 0 ; i < n - 1; i++){
	    for(j = i + 1; j < n; j++){
	        if(SV[i].dtb < SV[j].dtb){
		        svtam Temp;
		        Temp = SV[i];
		        SV[i] = SV[j];
		        SV[j] = Temp;
	        }
        }
    }
}
//Ham xuat thong tin cua sinh vien da duoc sap xep o bai 8.
void xuatsv(sinhvien SV, int n){
	int i; 
	for(i = 0; i < n; i++){
		printf("\nThong tin sinh vien co thu hang %d :", i + 1);
		printf("\nHoten: %s", SV[i].tensv);
		printf("\nMSSV: %s", SV[i].mssv);
		printf("\nDtb: %0.1f", SV[i].dtb);
		//Xep loai sinh vien theo diem trung binh cua sinh vien.
		if(SV[i].dtb >= 9){
			printf("\nXeploai: Xuat Sac");
		}
		else if(SV[i].dtb < 9 && SV[i].dtb >= 8){
			printf("\nXeploai: Gioi");
		}
		else if(SV[i].dtb < 8 && SV[i].dtb >= 6.5){
			printf("\nXeploai: Kha");
		}
		else if(SV[i].dtb < 6.5 && SV[i].dtb >= 5){
			printf("\nXeploai: TB");
		}
		else
		    printf("\nXeploai: Yeu");
    }
}
//Ham tao game FPoly o bai 9.
void gameFPL(int so1, int so2){
	int i, r1, r2;
	//Sinh 1 so ngau nhien tu 01 den 15.
	for(i = 0; i < 1; ++i){
    r1 = 1 + rand() % (15);
    }
    //Sinh 1 so ngau nhien tu 01 den 15.
    for(i = 0; i < 1; ++i){
        r2 = 1 + rand() % (15);
    }
    //Neu 2 so ban nhap trung voi 1 so ngau nhien o tren thi ban trung giai nhi.
	if(so1 == r1 || so1 == r2 || so2 == r1 || so2 == r2){
		printf("Chuc mung ban da trung giai nhi!!!");
	}
	//Trung ca 2 so thi giai nhat.
	else if(so1 == r1 || so1 == r2 && so2 == r1 || so2 == r2){
		printf("Chuc mung ban da trung giai nhat!!!");
	}
	//Khong trung ca 2 so thi chuc may man.
	else
	    printf("Chuc ban may man lan sau!");
}
//Tao cau truc du lieu cho kieu phan so o bai 10.
typedef struct
{
int ts;
int ms;
}ps;
//Ham rut gon phan so.
ps Rutgon(ps x){
    ps rg;
    rg.ts = x.ts / uscMAX(x.ts, x.ms);
    rg.ms = x.ms / uscMAX(x.ts, x.ms);
    return rg;
}
//Ham tinh tong cua 2 phan so.
ps Tong(ps x, ps y){
    ps t;
    t.ts = (x.ts * y.ms) + (x.ms * y.ts);
    t.ms = x.ms * y.ms;
    t = Rutgon(t);
    printf("\nTong = %d/%d", t.ts, t.ms);
}
//Ham tinh hieu cua 2 phan so.
ps Hieu(ps x, ps y){
    ps h;
    h.ts = (x.ts * y.ms) - (x.ms * y.ts);
    h.ms = x.ms * y.ms;
    h = Rutgon(h);
    printf("\nHieu = %d/%d", h.ts, h.ms);
}
//Ham tinh tich cua 2 phan so.
ps Tich(ps x, ps y){
    ps ti;
    ti.ts = x.ts * y.ts;
    ti.ms = x.ms * y.ms;
    ti = Rutgon(ti);
    printf("\nTich = %d/%d", ti.ts, ti.ms);
}
//Ham tinh thuong cua 2 phan so.
ps Thuong(ps x, ps y){
    ps th;
    th.ts = x.ts * y.ms;
    th.ms = x.ms * y.ts;
    th = Rutgon(th);
    printf("\nThuong = %d/%d", th.ts, th.ms);
}
//Menu cua Assigment Nhap Mon Lap Trinh gom co 10 bai.	
int main(){
	int bt;
	//Menu cua bai assigment.
	do{
	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	 printf("\n|              ---MENU ASSIGMENT COM108---              |");
	 printf("\n|          * 1: Kiem tra so nguyen.                     |");
	 printf("\n|          * 2: Tim uoc so chung va boi so chung.       |");
	 printf("\n|          * 3: Tinh tien quan Karaoke.                 |");
	 printf("\n|          * 4: Tinh tien dien.                         |");
	 printf("\n|          * 5: Quy doi tien.                           |");
	 printf("\n|          * 6: Lai suat vay ngan hang va tra gop.      |");
	 printf("\n|          * 7: Tinh tien vay mua xe.                   |");
	 printf("\n|          * 8: Sap xep thong tin sv.                   |");
	 printf("\n|          * 9: Game FPOLY-LOTT (2/15).                 |");
	 printf("\n|          * 10: Tinh toan phan so.                     |");
	 printf("\n|          * 11: Thoat !!!                              |");
	 printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	 printf("\nChon bai tap:");
	 scanf("%d", &bt);
	 switch (bt)
	    {
		case 1://Chon chuong trinh 1.
		    int So, sont, socp, son;
		    //Nhap so nguyen muon kiem tra.
	        printf("Nhap so nguyen x muon kiem tra:");
	        scanf("%d", &So);
	        socp = checkCP(So);
	        sont = checkNT(So);
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
			break;
		case 2://Chon chuong trinh 2.
		    int a, b, usc, bsc;
		    //Nhap 2 so nguyen muon kiem tra.
            printf("Nhap so nguyen a:");
            scanf("%d", &a);
            printf("Nhap so nguyen b:");
            scanf("%d", &b);
            usc = uscMAX(a, b);
            bsc = bscMIN(a, b);
            printf("Uoc so chung lon nhat cua %d va %d la %d.", a, b, usc);
            printf("\nBoi so chung nho nhat cua %d va %d la %d.", a, b, bsc);
			break;
		case 3://Chon chuong trinh 3.
		    float dau, cuoi, tien;
		    //Nhap gio bat dau va gio ket thuc hat trong gio hoat dong cua quan.
	        printf("Nhap gio bat dau :");
	        do{
	        	scanf("%f", &dau);
	        	if(dau < 12 || dau >= 23){
	        		printf("Gio nam ngoai gio hoat dong cua quan (12h - 23h)! \nXin moi nhap lai gio:");
				}
			}
			while(dau < 12 || dau >= 23);
	        printf("Nhap gio ket thuc :");
	        do{
	        	scanf("%f", &cuoi);
	        	if(cuoi <= 12 || cuoi > 23){
	        		printf("Gio nam ngoai gio hoat dong cua quan (12h - 23h)! \nXin moi nhap lai gio:");
				}
			}
			while(cuoi <= 12 || cuoi > 23);
	        tien = tienkaraoke(dau, cuoi);
	        printf("So tien phai thanh toan la: %0.0f vnd.", tien);	    
			break;
		case 4://Chon chuong trinh 4.
			float dien, tiendien;
			//Nhap so dien da su dung.
	        printf("Nhap so kWh dien da su dung:");
	        scanf("%f", &dien);
	        tiendien = tiendienthang(dien);
	        printf("So tien dien can phai tra cho %0.1f kWh dien la %0.0f vnd.", dien, tiendien);
			break;
		case 5://Chon chuong trinh 5.
			int tiendoi;
			//Nhap so tien can quy doi.
            printf("Nhap so tien can doi:");
            do{
                scanf("%d", &tiendoi);
                if(tiendoi < 1000){
                    printf("So tien ban muon doi phai lon hon 1000vnd!");
                    printf("\nMoi ban nhap lai so tien:");
                }
            }
			while(tiendoi < 1000);
            Doitien(tiendoi);
			break;
		case 6://Chon chuong trinh 6.
		   	int tienvay;
		   	//Nhap so tien can vay.
   	        printf("Nhap so tien muon vay: ");
	        scanf("%d",&tienvay);
	        tienlai(tienvay);
			 break;
		case 7://Chon chuong trinh 7.
		    float phantramvay;
		    //Nhap so % ban muon vay von.
	        printf("Nhap so %% ban muon vay (<80%%):");
            do{
                scanf("%f", &phantramvay);
                if(phantramvay <= 0 || phantramvay > 80){
                    printf("So %% ban muon vay khong hop le! \nMoi nhap lai:");
                }
            }
			while(phantramvay <= 0 || phantramvay > 80);
            tienmuaxe(phantramvay);
			break;
		case 8://Chon chuong trinh 8.
		    int n;
		    //Nhap so sinh vien muon quan ly thong tin.
            printf("Nhap so sinh vien ban muon them : ");
            scanf("%d", &n);
            sinhvien SV;
            //Quan ly bo nho.
            SV = (sinhvien)malloc(n*sizeof(sinhvien));
            if(SV == NULL){
                printf("Loi bo nho!!!");
            }
    	    (SV, NULL, n*sizeof(sinhvien));
            nhapsv(SV, n);
            xuatsv(SV, n);
			break;
		case 9://Chon chuong trinh 9.
		    int so1, so2, r1, r2, i;
		    //Nhap 2 so tuy chon trong khoang 01 den 15.
            printf("Nhap so thu 1 (01 - 15) = ");
            do{
                scanf("%d", &so1);
                if(so1 <= 0 || so1 >= 16){
                    printf("Nhap lai so thu 1: ");
                }
            }
			while(so1 <= 0 || so1 >= 16);
            printf("Nhap so thu 2 (01 - 15) = ");
            do{
                scanf("%d", &so2);
                if(so2 <= 0 || so2 >= 16){
                    printf("Nhap lai so thu 1: ");
                }
            }
			while(so2 <= 0 || so2 >= 16);
            gameFPL(so1, so2);
			break;
		case 10://Chon chuong trinh 10.
		    ps x, y, t, h, ti, th;
		    //Nhap phan so a va b.
            printf("Nhap phan so a :");
            printf("\nTu cua a =");
            scanf("%d", &x.ts);
            printf("Mau cua a =");
            do{
                scanf("%d", &x.ms);
                if(x.ms == 0){
                    printf("Nhap lai mau cua a = ");
                }
            }
			while(x.ms == 0);
            printf("Nhap phan so b :");
            printf("\nTu cua b =");
            scanf("%d", &y.ts);
            printf("Mau cua b =");
            do{
                scanf("%d", &y.ms);
                if(y.ms == 0){
                    printf("Nhap lai mau cus b = ");
                }
            }
			while(y.ms == 0);
            x = Rutgon(x);
            printf("\nPhan so a sau khi rut gon:%d/%d", x.ts, x.ms);
            y = Rutgon(y);
            printf("\nPhan so b sau khi rut gon:%d/%d", y.ts, y.ms);
            Tong(x, y);
            Hieu(x, y);
            Tich(x, y);
            Thuong(x, y);
			break;
		case 11://Thoat chuong trinh.
		     exit(0); 
	    } 	 	 	 	 
	}
	while(bt < 1 || bt > 11);//Neu ban chon ngoai 10 chuong trinh tren thi se quay lai menu chon. 
	return 0;      
}
