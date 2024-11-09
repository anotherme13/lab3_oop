#include<bits/stdc++.h>
using namespace std;

class thoigian
{
  private:
    int gio,phut,giay;
  public:
    thoigian() // Constructor mac dinh voi gio,phut,giay  = 1
    {
      gio = 1;
      phut = 1;
      giay = 1;
    }
    thoigian(int _gio,int _phut, int _giay)   // Constructor co tham so
    {
        gio = _gio;
        phut = _phut;
        giay = _giay;
    }
    thoigian Tinhlaigio(int _giay) // Ham nay nhan vao so giay va chuyen no la thanh format gio,phut,giay
    {
      return thoigian(_giay / 3600, (_giay % 3600) / 60, (_giay % 3600) %60);   
    }
    int Tinhgiay()  // Ham nay se dua vao giop,phut,giay cua class va tinh ra tong so giay la bao nhieu
    {
      return gio * 60 * 60 + phut * 60 + giay;
    }
    // Overload cac phep toan +,- (int giay)
    thoigian operator + (int _giay) 
    {
      int tmp = Tinhgiay() + _giay;
      return Tinhlaigio(tmp);
    }
    thoigian operator - (int _giay) 
    {
      int tmp = Tinhgiay() - _giay;
      return Tinhlaigio(tmp);
    }

    // Overload cac phep toan +,- (int thoigian)
   thoigian operator - (thoigian a)
   {
    return Tinhlaigio(Tinhgiay() - a.Tinhgiay());
   }
   thoigian operator + (thoigian a)
   {
    return Tinhlaigio(Tinhgiay() + a.Tinhgiay());
   }
  // Overload post_increment/decrement cho class thoigan (tang giay len 1s)
   thoigian operator ++ (int)
   {
    thoigian tmp = *this;
    giay ++;
    phut += (giay / 60);
    gio += (phut / 60);
    giay %= 60;
    phut %= 60;
    return tmp;
   }
   thoigian operator -- (int)
   {
    thoigian tmp = *this;
    int _giay = giay - 1;
    int _phut = phut;
    int _gio = gio;
    if (_giay == -1)
    {
      _giay = 59;
      _phut--;
      if (_phut == -1)
      {
        _gio--;
      }
    }
    gio = _gio;
    phut = _phut;
    giay = _giay;
    return tmp;
   }
  // Overload cac phep toan so sanh 2 thoi gian
   bool operator == (thoigian x) const 
   {
      return (x.gio == gio && x.giay == giay && x.phut == phut);
   }

   bool operator != (thoigian x)
   {  
      return (x.gio != gio || x.giay != giay || x.phut != phut);
   }
   bool operator <= (thoigian x)
   {  
      if (gio < x.gio)  return 1;
      if (phut < x.phut)  return 1;
      if (giay <= x.giay)  return 1;
      return 0;
   }
   bool operator < (thoigian x)
   {  
      if (gio < x.gio)  return 1;
      if (phut < x.phut)  return 1;
      if (giay < x.giay)  return 1;
      return 0;
   }
   bool operator >= (thoigian x)
   {  
      if (gio > x.gio)  return 1;
      if (phut > x.phut)  return 1;
      if (giay >= x.giay)  return 1;
      return 0;
   }
    bool operator > (thoigian x)
   {  
      if (gio > x.gio)  return 1;
      if (phut > x.phut)  return 1;
      if (giay > x.giay)  return 1;
      return 0;
   }
  // Overload cac phuong thuc nhap xuat cho lop thoi gian
   friend ostream & operator << (ostream &o, thoigian x);
   friend istream & operator >>  (istream &i, thoigian &x); 
   
};
// Overload << voi yeu cau nhap xuat
ostream & operator << (ostream &o, thoigian x)
{
  o << x.gio << " gio " << x.phut << " phut " << x.giay << " giay\n";

  return o;
}

// Overload >> voi yeu cau nhap xuat
istream & operator >> (istream &i, thoigian &x)
{
  cout << "Nhap gio = ";
  i >> x.gio;
  cout << "Nhap phut = ";
  i >> x.phut;
  cout << "Nhap giay = ";
  i >> x.giay;
  cout << endl;
  return i;
}