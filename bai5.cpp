// Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a. Hãy in lần lượt các số nguyên tố có trong dãy a ra màn hình, sau mỗi phần tử có đúng một khoảng trắng.
// (Số nguyên tố là số nguyên dương có đúng 2 ước là 1 và chính nó. Số a được gọi là ước của b nếu b chia hết cho a). Biết rằng dãy sẽ có ít nhất một số nguyên tố.
// Ví dụ:
// Test mẫu 1:
// Với n = 4, a = [1, 2, 3, 4] thì kết quả mong muốn là: "2 3 ".
// Test mẫu 2:
// Với n = 3, a = [7, 2, 3] thì kết quả mong muốn là: "7 2 3 ".

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
  if (n < 2)
    return false;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int a[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "Mảnh bạn vừa tạo là : " << " ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  cout << "Lọc số nguyên tố trong mảng : " << " ";
  for (int i = 0; i < n; i++)
  {
    if (isPrime(a[i]))
    {
      cout << a[i] << " ";
    }
  }

  system("pause");
  return 0;
}