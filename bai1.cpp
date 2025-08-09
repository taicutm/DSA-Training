//Bài tập.
Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a.
Hãy thay đổi giá trị của mỗi phần tử thành bình phương của chính nó, sau đó in mảng đó ra màn hình (mỗi phần tử cách nhau bởi một khoảng trắng).
Với n = 4 và a = [1, 3, 5, -3] thì kết quả mong muốn là: "1 9 25 9 ".

#include <iostream>

using namespace std;

int main()
{
  int a[100];
  int n;
  // hãy nhật 1 số
  cout << "Nhập vào một số nguyên: ";
  cin >> n;

  // khởi tạo mảng n
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  // in ra mảng n
  cout << "Mảng bạn nhập là: ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  // bình phương cái kết quả mảng bạn vừa nhập
  cout << "\nBình phương các phần tử trong mảng là: ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] * a[i] << " ";
  }
   system("pause"); // Dừng màn hình

  return 0;
}