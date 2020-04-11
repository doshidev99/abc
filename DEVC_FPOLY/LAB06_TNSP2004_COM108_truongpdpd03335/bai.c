#include <stdio.h>
int main()
{
    int mang[10], n, i;
    printf("Nhap so thap phan muon chuyen:");
    scanf("%d", &n);
    for (i = 0; n > 0; i++) //n = 10
    {
        mang[i] = n % 2; // 0 - 1 - 0 -1
        n = n / 2;       // n/2 = 5 - 2 - 1 -0
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", mang[i]);
    }
    return 0;
}