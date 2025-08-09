// Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a. Tiếp theo nhập vào hai số nguyên là k và x (0 ≤ k ≤ n).
// Hãy chèn phần tử có giá trị x vào dãy a, ở trước phần tử có chỉ số k và sau phần tử có chỉ số k-1. In mảng kết quả ra màn hình, mỗi số cách nhau bởi một khoảng trắng.
// Với n = 4, a = [1, 2, 3, 4], k = 1, x = 10 thì kết quả mong muốn là: "1 10 2 3 4 ".
// Với n = 3, a = [1, 2, 3], k = 3, x = 123 thì kết quả mong muốn là: "1 2 3 123 ".

#include <iostream>
using namespace std;
int main()
{
  int a[100];
  int n, k, x;
  // nhap n
  cout << "Nhập số nguyên dương n: ";
  cin >> n;
  cout << "Số bạn vừa nhập là " << " " << n << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "Mảng bạn vừa nhập là : ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  cout << "Nhập số nguyên dương k: ";
  cin >> k;
  cout << "Nhập số nguyên dương x: ";
  cin >> x;
  cout << "Tổng hợp" << endl;
  cout << "n = " << n << endl;

  for (int i = 0; i < n; i++)
  {
    // cout << "a[" << i << "] = " << a[i] << " ";
    cout << a[i] << " ";
  }
  cout << endl;

  cout << "k = " << k << endl;
  cout << "x = " << x << endl;

  for (int i = n; i >= k + 1; i--)
  {
    a[i] = a[i - 1];
  }
  a[k] = x;
  n++; // báo cho chương trình nâng mảng n
  cout << "Kết quả" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

  system("pause");
  return 0;
}