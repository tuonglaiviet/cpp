/*
  Chương 8: Trừu tượng hóa dữ liệu
  Bài 464: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
  ÂN Group - www.angroup.one
*/

#include<stdio.h>
#include<conio.h>

struct HonSo
{
    int Tu;
    int Mau;
    int Nguyen;
};
typedef struct HonSo HONSO;

void NhapHonSo(HONSO &);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO &hs)
{
    printf("\nNhap nguyen: ");
    scanf("%d", &hs.Nguyen);

    printf("\nNhap tu so: ");
    scanf("%d", &hs.Tu);

    printf("\nNhap mau so: ");
    scanf("%d", &hs.Mau);
}

void XuatHonSo(HONSO hs)
{
    printf("%d(%d/%d)", hs.Nguyen, hs.Tu, hs.Mau);
}

int main()
{
    HONSO hs;
    NhapHonSo(hs);
    XuatHonSo(hs);

    getch();
    return 0;
}
