/*
  Chương 9: Đệ quy
  * Đệ quy phi tuyến
  Bài 510: Viết hàm tính số hạng thứ n của hai dãy sau:
       X(0) = 1
       Y(0) = 0
       X(n) = x(n – 1) + y(n – 1) (n > 0)
       Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0)
  ÂN Group - www.angroup.one
  
  Ghi chú: Đệ quy phi tuyến là Hàm có lời gọi lại chính nó được đặt trong vòng lặp.
*/
#include<stdio.h>
#include<conio.h>

long tinhXn(int n)
{
    if(n == 0)
        return 1;
    long s = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + i * i * tinhXn(n - i);
    }
    return s;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    long s = tinhXn(n);
    printf("S = %ld", s);

    getch();
    return 0;
}
