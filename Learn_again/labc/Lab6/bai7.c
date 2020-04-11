#include <stdio.h>
int main() {
   char s[500];
   printf("nhap chuoi ky tu muon check:");
   scanf("%499s",s);
   int i = 0,n = 0,p =0;    
      while(s[i++] != '\0') {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
         n++;
      else
         p++;
   }
   printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, n, p);
return 0;
}