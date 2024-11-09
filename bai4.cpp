#include<bits/stdc++.h>
#include "ngaythangnam.h"
using namespace std;
int main()
{
  ngaythangnam x,y;
  cout << "Nhap ngay thang nam  thu nhat\n";
  cin >> x;
  cout << "Nhap ngay thang nam  thu hai\n";
  cin >> y;
  cout << "ngay thang nam thu nhat\n";
  cout << x;
  cout << "ngay thang nam thu hai\n";
  cout << y;
  cout << "ngay thang nam 1 + ngay thang nam 2: " << x + y;
  cout << "ngay thang nam 1 - ngay thang nam 2: " << x - y;
  x++;
  y++;
  cout << "ngay thang nam 1 sau khi thuc hien ++ (tang 1 ngay): " << x;
  cout << "ngay thang nam 2 sau khi thuc hien ++ (tang 1 ngay): " << y;
  x--;
  y--;
  cout << "ngay thang nam 1 sau khi thuc hien -- (giam 1 ngay): " << x;
  cout << "ngay thang nam 2 sau khi thuc hien -- (giam 1 ngay): " << y;
  cout << "Nhap so ngay muon cong: " ;
  int sec;
  cin >> sec;
  x = x + sec;
  y = y + sec;
  cout << "ngay thang nam 1 sau khi tang them " << sec << " ngay: " << x;
  cout << "ngay thang nam 2 sau khi tang them " << sec << " ngay: " << y;   
  cout << "Nhap so ngay muon tru: " ;
  cin >> sec;
  x = x - sec;
  y = y - sec;
  cout << "ngay thang nam 1 sau khi giam " << sec << " ngay: " << x;
  cout << "ngay thang nam 2 sau khi giam " << sec << " ngay: " << y;   
  cout << "Ket qua thuc hien phep == cua ngay thang nam  1 voi ngay thang nam  2: " << (x == y) << endl;
  cout << "Ket qua thuc hien phep != cua ngay thang nam  1 voi ngay thang nam  2: " << (x != y) << endl;
  cout << "Ket qua thuc hien phep >= cua ngay thang nam  1 voi ngay thang nam  2: " << (x >= y) << endl;
  cout << "Ket qua thuc hien phep > cua ngay thang nam  1 voi ngay thang nam  2: " << (x > y) << endl;
  cout << "Ket qua thuc hien phep <= cua ngay thang nam  1 voi ngay thang nam  2: " << (x <= y) << endl;
  cout << "Ket qua thuc hien phep < cua ngay thang nam  1 voi ngay thang nam  2: " << (x < y) << endl;
  return 0;
}


