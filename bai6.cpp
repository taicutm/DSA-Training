// Nhập và một số nguyên dương n, tiếp theo là n số nguyên dương lần lượt là các phần tử của một dãy số, hãy đếm tần số (số lần xuất hiện) của các số trong dãy và in nó ra màn hình dưới dạng sau: "a1 - t1; a2 - t2; ... an - tn; ", trong đó t1 là số lần xuất hiện của số a1, t2 là số lần xuất hiện của a2, ... a1, a2, .. an không trùng nhau và được sắp xếp tăng dần (xem ví dụ để rõ hơn).

// Ví dụ:

// Test mẫu 1:
// Với a = [4, 2, 2, 5, 6, 5] thì kết quả mong muốn là: "2 - 2; 4 - 1; 5 - 2; 6 - 1; ".
#include<iostream>
 using namespace std;
 int a[1000],b[1000];
 int main(){
	 int n;
	 cin >> n;
	 for(int i =0;i<n;i++)
	 {
		 cin >> a[i];
	 }
	 // LẤy giá trị lớn nhất của mảng để làm giới hạn
	 int Max=a[0];
	  for(int i =0;i<n;i++)
	 {
		if(a[i] >Max){
			Max=a[i];
		}
	 }
	 cout <<endl<<"Max là : "<< ""  << Max;
	 // tạo mảng b dựa trên chỉ số max và gán mảng b là 0 hết
	 for(int i=0;i<=Max;i++)
	 {
		 b[i]=0;
	 }
	 cout <<endl<<"Mảng b : "   ;
	 for(int i=0;i<=Max;i++)
	 {
		  cout << b[i]<<" ";
	 }
	  for(int i=0;i<n;i++)
	 {
		  b[a[i]] +=1;
	 }
	  cout <<endl<<"Mảng b sau khi cộng là : "   ;
	 for(int i=0;i<=Max;i++)
	 {
		  cout << b[i]<<" ";
	 }
	  cout <<endl<<"đáp án là : "   ;
	  for(int i=0;i<n;i++)
	 {
		  if(b[i] >0){
			  cout << i <<"-" << b[i] << ";";
		  }
	 }
	 system("pause");
	 return 0;
 }