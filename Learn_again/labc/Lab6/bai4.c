#include<stdio.h>
int main (){
    int n,m;
    printf("nhap vao gia tri hang:");
    do{
        scanf("%d",&n);
        if(n<=0)
        printf("nhap lai n:");
    }while(n<=0);
    printf("nhap vao gia tri cot m:");
    do{
        scanf("%d",&m);
        if(m<=0)
        printf("nhap lai m:");
    }while(m<=0);
    int i,j,mang[n][m];
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("nhap gia tri cua mang[%d][%d]:",i,j);
            scanf("%d",&mang[i][j]);
        }
        }
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\n%4d",mang[i][j]*mang[i][j]);
        }
        printf("\n");
        }
        return 0;
        }