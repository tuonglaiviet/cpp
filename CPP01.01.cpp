/*
  Chương 1: Lưu đồ thuật toán
  Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
  ÂN Group - www.angroup.one
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long S;
    S = 0;
    i = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        S = S + i;
        i++;
    }
    printf("\nTong 1 + 2 + ... + %d la %ld: ", n, S);
    getch();
    return 0;
}
