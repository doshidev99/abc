#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
  int bt;
  //Menu cua bai assigment.
  do
  {
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
    case 1:
      printf("Nhap so nguyen x muon kiem tra:");
      break;
    case 2:
      printf("Tìm Ước số chung và bội số chung của 2 số");
      break;
    case 3:
      printf("Tinh tien quan Karaoke");
      break;
    case 4:
      printf("Tinh tien dien.");
      break;
    case 5:
      printf("Quy doi tien.");
      break;
    case 6:
      printf("Lai suat vay ngan hang va tra gop.");
      break;
    case 7:
      printf("Tinh tien vay mua xe.");
      break;
    case 8:
      printf("Sap xep thong tin sv.   ");
      break;
    case 9:
      printf("Game FPOLY-LOTT (2/15)");
      break;
    case 10:
      printf(" Tinh toan phan so. ");
      break;
    case 11:
      exit(0);
    }
  } while (bt < 1 || bt > 11); //Neu ban chon ngoai 10 chuong trinh tren thi se quay lai menu chon.
  return 0;
}
