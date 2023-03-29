/*
  Chương 9: Đệ quy
  * Đệ quy nhị phân
  Bài 507: Viết hàm đệ quy tính tổng của biểu thức sau đây: S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!
  ÂN Group - www.angroup.one
  
  Ghi chú: Dãy Fibo là gì? - https://vi.wikipedia.org/wiki/D%C3%A3y_Fibonacci
           Đệ quy nhị phân (Binary Recursion): Đệ quy nhị phân là dạng đệ quy gọi hai lần chính nó. 
           Hiểu đơn giản là trong một hàm đệ quy, mà có dòng lệnh gọi chính hàm đó hai lần.
*/
#include<stdio.h>
#include<conio.h>

float Tinh(float x, int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return x;
    return (1 + x/n) * Tinh(x, n - 1) - (x/n) * Tinh(x, n - 2);
}
int main()
{
    float x;
    int n;

    printf("\nNhap x: "); scanf("%f", &x);
    printf("\nNhap n: "); scanf("%d", &n);

    float kq = Tinh(x, n);
    printf("\nKet qua = %.2f", kq);

    getch();
    return 0;
}
