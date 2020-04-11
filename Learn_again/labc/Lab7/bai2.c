#include<stdio.h>
int main (){
    char username [100]="admin";
    int pass =12345;
    char user[100];
    int passuser;
    printf("nhap id:");
    scanf("%s",user);
    printf("nhap pass:");
    scanf("%d",&passuser);
    if(user[50]==username[5]&&passuser==pass){
        printf("Dang nhap thanh cong:");
}
else{
printf("Dang nhap khong thanh cong:");
}
return 0;
}