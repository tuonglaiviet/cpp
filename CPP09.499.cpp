/*
  Chương 9: Đệ quy
  * Đệ quy tuyến tính
  Bài 499: Tính S(n) = 1 + 2 + 3 + … + n
  ÂN Group - www.angroup.one
*/

#include<stdio.h>
#include<conio.h>

long Tong(int n)
{
    if(n == 0)
        return 0;
    return Tong(n - 1) + n;
}

int main()
{
    int n, S;
    printf("\Nhap n = "); scanf("%d", &n);

    S = Tong(n);
    printf("S = %d", S);

    getch();
    return 0;
}
