/*
  Chương 9: Đệ quy
  * Đệ quy tuyến tính
  Bài 500: Cho mảng 1 chiều các số nguyên. Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy
  ÂN Group - www.angroup.one
  
  Ghi chú: Đệ quy tuyến tính (Linear Recursion) - Đệ quy tuyến tính là hàm đệ quy chỉ gọi chính nó một lần trong thân hàm. Hiểu đơn giản là trong một hàm, nếu có duy nhất một câu lệnh gọi chính hàm đó thì được gọi là hàm đệ quy tuyến tính.
           Ví dụ hàm tính giai thừa chính là một hàm đệ quy tuyến tính, vì nó chỉ gọi lại chính nó một lần duy nhất.

  Tham khảo: 
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

int tongChan(int a[], int n)
{
    
    if(n == 0)
        return 0;
    float s = tongChan(a, n - 1);
    if(a[n - 1] % 2 == 0)
        s = s + a[n - 1];
    return s;

    //if(n == 0)
    //    return 0;
    //if(a[n - 1] % 2 == 0)   // xét phần tử cuối trước
    //    return tongChan(a, n - 1) + a[n - 1];
    //return tongChan(a, n - 1);
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int tong = tongChan(a, n);
    printf("\nTong cac so chan = %d", tong);

    getch();
    return 0;
}
