/*
  Chương 9: Đệ quy
  * Đệ quy nhị phân
  Bài 504: Viết hàm đệ quy tính số hạng thứ n của dãy Fibo
  ÂN Group - www.angroup.one
  
  Ghi chú: Dãy Fibo là gì? - https://vi.wikipedia.org/wiki/D%C3%A3y_Fibonacci

           Đệ quy nhị phân (Binary Recursion): Đệ quy nhị phân là dạng đệ quy gọi hai lần chính nó. 
           Hiểu đơn giản là trong một hàm đệ quy, mà có dòng lệnh gọi chính hàm đó hai lần.
*/

#include<stdio.h>
#include<conio.h>

long Fibo(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return Fibo(n - 1) + Fibo(n - 2);
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    long kq = Fibo(n);
    printf("\nFibo = %d", kq);

    getch();
    return 0;
}
