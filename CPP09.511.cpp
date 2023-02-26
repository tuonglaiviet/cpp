/*
  Chương 9: Đệ quy
  Bài 511: Bài toán tháp Hà Nội: Có 3 chồng đĩa đánh số 1, 2 và 3. Đầu tiên chồng 1 có n đĩa được xếp sao
  cho đĩa lớn hơn nằm bên dưới và hai chồng đĩa còn lại không có đĩa nào. Yêu cầu: chuyển tất cả các đĩa từ
  chồng 1 sang chồng 3, mỗi lần chỉ chuyển một đĩa và được phép sử dụng chồng hai làm trung gian. Hơn nữa
  trong quá trình chuyển đĩa phải bảo đảm quy tắc đĩa lớn hơn nằm bên dưới.
  ÂN Group - www.angroup.one
*/

#include <iostream>
using namespace std;
 
void move(int n,char A,char B,char C)
 {
      if(n==1){
        cout<<A<<" ==> "<<C<<"\n";// nếu n = 1 thì dịch chuyển từ A -> C
      }
      else {        
        //// Nếu n > 1 thì thực hiện lần lượt các bước
        move(n - 1, A, C, B); // 1. Dịch chuyển n-1 đĩa từ A -> B
        cout<<A<<" ==> "<<C<<"\n"; //2. Dịch chuyển đĩa thứ n từ A -> C
        move(n - 1, B, A, C); // 3. Dịch chuyển n-1 đĩa từ B -> C
      }
 }
 
int main() {
  int n;
  cout<<endl<<"Nhập vào số đĩa N mà bạn muốn tìm cách giải: ";
  cin>>n;
  cout<<"Thứ tự dịch chuyển các vị trí A B C là: \n";
  move(n, 'A', 'B', 'C');
   
  cout<<"\n------------------------------\n";
  cout<<"Chương trình này được dạy tại www.angroup.one";
}
