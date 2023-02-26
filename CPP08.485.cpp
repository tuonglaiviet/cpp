/*
  Chương 8: Trừu tượng hóa dữ liệu
  Bài 485: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của 1 tỉnh (TINH). Biết rằng một tỉnh gồm những thành phần sau:
    - Mã tỉnh: Kiểu số nguyên 2 byte
    - Tên tỉnh: Chuỗi tối đa 30 ký tự
    - Diện tích: Kiểu số thực
  Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
  ÂN Group - www.angroup.one
*/

#include<stdio.h>
#include<conio.h>

struct Tinh
{
    int MaTinh;
    char TenTinh[30];
    float DienTich;
};
typedef struct Tinh TINH;

void NhapTinh(TINH &t)
{
    printf("Nhap ma tinh: \n");
    scanf("%d", &t.MaTinh);

    fflush(stdin);
    printf("Nhap vao ten tinh: \n");
    gets(t.TenTinh);

    printf("Nhap vao dien tich: \n");
    scanf("%f", &t.DienTich);
}

void XuatTinh(TINH t)
{
    printf("Ma tinh: %d\n", t.MaTinh);
    printf("Ten tinh: %s\n", t.TenTinh);
    printf("Dien tich: %.2f (km^2)\n", t.DienTich);
}

int main()
{
    TINH t1;
    NhapTinh(t1);
    XuatTinh(t1);

    getch();
    return 0;
}
