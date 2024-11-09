#include<bits/stdc++.h>
#include "thoigian.h"
using namespace std;
int main()
{
  thoigian x,y;
  cout << "Nhap thoi gian thu nhat\n";
  cin >> x;
  cout << "Nhap thoi gian thu hai\n";
  cin >> y;
  cout << "Thoi gian thu nhat\n";
  cout << x;
  cout << "Thoi gian thu hai\n";
  cout << y;
  cout << "Thoi gian 1 + thoi gian 2: " << x + y;
  cout << "Thoi gian 1 - thoi gian 2: " << x - y;
  x++;
  y++;
  cout << "Thoi gian 1 sau khi thuc hien ++ (tang 1 giay): " << x;
  cout << "Thoi gian 2 sau khi thuc hien ++ (tang 1 giay): " << y;
  x--;
  y--;
  cout << "Thoi gian 1 sau khi thuc hien -- (giam 1 giay): " << x;
  cout << "Thoi gian 2 sau khi thuc hien -- (giam 1 giay): " << y;
  cout << "Nhap so giay muon cong: " ;
  int sec;
  cin >> sec;
  x = x + sec;
  y = y + sec;
  cout << "Thoi gian 1 sau khi tang them " << sec << " giay: " << x;
  cout << "Thoi gian 2 sau khi tang them " << sec << " giay: " << y;   
  cout << "Nhap so giay muon tru: " ;
  cin >> sec;
  x = x - sec;
  y = y - sec;
  cout << "Thoi gian 1 sau khi giam " << sec << " giay: " << x;
  cout << "Thoi gian 2 sau khi giam " << sec << " giay: " << y;   
  cout << "Ket qua thuc hien phep == cua thoi gian 1 voi thoi gian 2: " << (x == y) << endl;
  cout << "Ket qua thuc hien phep != cua thoi gian 1 voi thoi gian 2: " << (x != y) << endl;
  cout << "Ket qua thuc hien phep >= cua thoi gian 1 voi thoi gian 2: " << (x >= y) << endl;
  cout << "Ket qua thuc hien phep > cua thoi gian 1 voi thoi gian 2: " << (x > y) << endl;
  cout << "Ket qua thuc hien phep <= cua thoi gian 1 voi thoi gian 2: " << (x <= y) << endl;
  cout << "Ket qua thuc hien phep < cua thoi gian 1 voi thoi gian 2: " << (x < y) << endl;
  return 0;
}


