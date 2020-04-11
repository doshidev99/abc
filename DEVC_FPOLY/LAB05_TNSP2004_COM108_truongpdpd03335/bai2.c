#include <stdio.h>
#include <stdlib.h>
int checkyear(int a);

int main()
{

    int a, flag;
    printf("xin moi nhap nam");
    scanf("%d", &a);
    flag = checkyear(a);
    if (flag == 1)
    {
        printf("nam %d la nam nhuan", a);
    }
    else
    {

        printf("nam %d ko phai la nam nhuan", a);
    }

    return (0);
}
int checkyear(int a)
{
    int flag = 0;
    if (a % 400 == 0)
        flag = 1;
    else if (a % 4 == 0 && a % 100 != 0)
        flag = 1;

    return flag;
}