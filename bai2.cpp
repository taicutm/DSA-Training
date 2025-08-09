// Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a. Hãy đưa ra một số nguyên là tổng tất cả các phần tử trong dãy đó.
// Với n = 5 và a = [1, 3, 5, -3, 0] thì kết quả mong muốn là 6.
#include <iostream>
using namespace std;

int main()
{
  int a[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << "\n Tổng các phần tử trong mảng là: ";
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
  cout << sum << endl;
  cin.ignore();
cin.get();

  return 0;
}
