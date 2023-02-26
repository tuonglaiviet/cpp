/*
  Chương 9: Đệ quy
  * Đệ quy tuyến tính
  Bài 499: Tính S(n) = 1 + 2 + 3 + … + n
  ÂN Group - www.angroup.one
  
  Ghi chú: Đệ quy tuyến tính (Linear Recursion) - Đệ quy tuyến tính là hàm đệ quy chỉ gọi chính nó một lần trong thân hàm. Hiểu đơn giản là trong một hàm, nếu có duy nhất một câu lệnh gọi chính hàm đó thì được gọi là hàm đệ quy tuyến tính.
           Ví dụ hàm tính giai thừa chính là một hàm đệ quy tuyến tính, vì nó chỉ gọi lại chính nó một lần duy nhất.
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
