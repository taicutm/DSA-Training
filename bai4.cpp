// Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a. Tiếp theo nhập vào số nguyên là k (0 ≤ k < n).

// Hãy xóa phần tử có chỉ số k ở trong dãy đó. In mảng kết quả ra màn hình, sau mỗi phần tử có đúng một khoảng trắng.
// Ví dụ:
// Test mẫu 1:
// Với n = 4, a = [1, 2, 3, 4], k = 1, thì kết quả mong muốn là: "1 3 4 ".
// Test mẫu 2:
// Với n = 3, a = [1, 2, 3], k = 2, thì kết quả mong muốn là: "1 2 ".
#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;
int main()
{
  int a[100];
  int n, k;
  cout << "nhập n : ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "Mảng bạn vừa nhập là :" << " ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << "nhập k : ";
  cin >> k;
  for (int i = k; i < n; i++)
  {
    a[i] = a[i + 1];
  }
  n--;
  cout << "sau khi xóa là : ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

  system("pause");
  return 0;
}
