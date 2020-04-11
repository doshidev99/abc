#include <stdio.h>

int timmax3so(int a, int b, int c);
int main()
{
  int a, b, c, max;
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);
  printf("Nhap so c: ");
  scanf("%d", &c);
  max = timmax3so(a, b, c);
  printf("\nSo lon nhat trong 3 so %d, %d, %d, la: %d.", a, b, c, max);
  return 0;
}
int timmax3so(int a, int b, int c)
{
  int max;
  if (a > b && a > c)
    max = a;
  else if (b > a && b > c)
    max = b;
  else
    max = c;
  return max;
}