/*
  Chương 9: Đệ quy
  * Đệ quy hỗ tương
  Bài 509: Viết hàm tính số hạng thứ n của hai dãy sau:
       X(0) = 1
       Y(0) = 0
       X(n) = x(n – 1) + y(n – 1) (n > 0)
       Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0)
  ÂN Group - www.angroup.one
  
  Ghi chú: Đệ quy tương hỗ (Mutual Recursion) - Đệ quy tương hỗ là loại đệ quy không gọi đệ quy trực tiếp chính nó, mà gọi một hàm khác. Trong hàm khác lại gọi lại nó. Ví dụ chúng ta có hàm A() gọi đệ quy hàm B() và trong hàm B() gọi lại đệ quy hàm A().
  Đọc thêm: https://www.google.com (Search: Đệ quy hỗ tương)
*/
#include<stdio.h>
#include<conio.h>

long tinhXn(int);
long tinhYn(int);

long tinhXn(int n)
{
    if(n == 0)
        return 1;
    return tinhXn(n - 1) + tinhYn(n - 1);
}

long tinhYn(int n)
{
    if(n == 0)
        return 0;
    return 3*tinhXn(n - 1) + 2*tinhYn(n - 1);
}
int main()
{
    int n;
    printf("\nNhap n "); scanf("%d", &n);

    long kq1 = tinhXn(n);
    long kq2 = tinhYn(n);

    printf("\nX(n) = %d, Y(n) = %d", kq1, kq2);

    getch();
    return 0;
}
