#include<bits/stdc++.h>
#include "sophuc.h"
using namespace std;
int main()
{
  sophuc x,y;
  cout << "Nhap so phuc thu nhat\n";
  cin >> x;
  cout << "Nhap so phuc thu hai\n";
  cin >> y;
  cout << "\n-----------------------------\n";
  cout << "So phuc thu nhat: " << x;
  cout << "So phuc thuc hai: " << y;
  cout << "Tong cua hai so phuc: " << x + y;
  cout << "Hieu cua hai so phuc: " << x - y;
  cout << "Tich cua hai so phuc: " << x * y;
  cout << "Thuong cua hai so phuc: " << x / y;
  cout << "Ket qua cua (x == y): " << (x == y) << endl;
  cout << "Ket qua cua (x != y): " << (x != y);
}