#include<bits/stdc++.h>
using namespace std;
const int Ngaytrongthang[] ={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
// So ngay trong moi thang (tinh theo nam khong nhuan)
class ngaythangnam
{
  private:
    int ngay,thang,nam;
  public:

    bool Namnhuan(int _nam) // tra ve true neu _nam la nam nhuan va nguoc lai
    { 
      if (_nam % 4 == 0) 
      { 
        if (_nam % 100 == 0) 
        { 
          if (_nam % 400 == 0) 
          { 
            return true;
          } 
          else 
           return false;   
        } 
        else 
          return true;   
      } 
      else 
       return false;  
    }

    ngaythangnam() // Constructor mac dinh
    {
      nam = 1;
      thang = 1;
      ngay = 1;
    }

    ngaythangnam(int _ngay,int _thang, int _nam)  // Constructor co tham so
    {
        nam = _nam;
        thang = _thang;
        ngay = _ngay;
    }

    ngaythangnam Tinhlainam(int tongngay) 
    // Tinhlainam se nhan vao tongngay va tinh lai theo format ngay/thang/nam
    {
        int _nam = 1;
        int _thang = 1;
        int _ngay = 1;

        while (tongngay > 0) 
        {
            int songaytrongthang = Ngaytrongthang[_thang - 1];
            if (Namnhuan(_nam) && _thang == 2)  songaytrongthang = 29;
            if (tongngay <= songaytrongthang) 
            {
                _ngay += tongngay - 1;
                break;
            } 
            else
            {
                tongngay -= songaytrongthang;
                _thang++;
                if (_thang > 12) 
                {
                    _thang = 1;
                    _nam++;
                }
            }
        }
        return ngaythangnam(_ngay,_thang,_nam);
    }

    int Tinhngay() // Tinhngay se dua vao nam, thang, ngay hien tai ma quy ra tong so ngay la bao nhieu
    {
        int ans = 0;
        
        for (int i = 1; i < nam; i++)
        {
          if (Namnhuan(i))  ans += 366;
          else              ans += 365;
        }

        for (int i = 1; i < thang; i++)
        {
          ans += Ngaytrongthang[i - 1];
          if (i == 2 && Namnhuan(nam))  ans++;
        }
        ans += ngay;
        return ans;
    }
    // Overload cac phep toan cua class ngaythangnam +,- (int ngay)
    ngaythangnam operator + (int _ngay) 
    {
      int tmp = Tinhngay() + _ngay;
      return Tinhlainam(tmp);
    }
    ngaythangnam operator - (int _ngay) 
    {
      int tmp = Tinhngay() - _ngay;
      return Tinhlainam(tmp);
    }
   // Overload cac phep toan cua class ngaythangnam +,- ngaythangnam
   ngaythangnam operator - (ngaythangnam a)
   {
    return Tinhlainam(Tinhngay() - a.Tinhngay());
   }
   ngaythangnam operator + (ngaythangnam a)
   {
    return Tinhlainam(Tinhngay() + a.Tinhngay());
   }

    // Overload post-increment/decrement cho class ngaythangnam (ngay +- 1)
   ngaythangnam operator ++ (int)
   {
    ngaythangnam tmp = *this;
    ngay ++;
    thang += (ngay / 60);
    nam += (thang / 60);
    ngay %= 60;
    thang %= 60;
    return tmp;
   }
   ngaythangnam operator -- (int)
   {
    ngaythangnam tmp = *this;
    int _ngay = ngay - 1;
    int _thang = thang;
    int _nam = nam;
    if (_ngay == -1)
    {
      _ngay = 59;
      _thang--;
      if (_thang == -1)
      {
        _nam--;
      }
    }
    nam = _nam;
    thang = _thang;
    ngay = _ngay;
    return tmp;
   }

  // Overload cac phep so sanh 2 ngaythangnam
   bool operator == (ngaythangnam x) const 
   {
      return (x.nam == nam && x.ngay == ngay && x.thang == thang);
   }
   bool operator != (ngaythangnam x)
   {  
      return (x.nam != nam || x.ngay != ngay || x.thang != thang);
   }
   bool operator <= (ngaythangnam x)
   {  
      if (nam < x.nam)  return 1;
      if (thang < x.thang)  return 1;
      if (ngay <= x.ngay)  return 1;
      return 0;
   }
   bool operator < (ngaythangnam x)
   {  
      if (nam < x.nam)  return 1;
      if (thang < x.thang)  return 1;
      if (ngay < x.ngay)  return 1;
      return 0;
   }
   bool operator >= (ngaythangnam x)
   {  
      if (nam > x.nam)  return 1;
      if (thang > x.thang)  return 1;
      if (ngay >= x.ngay)  return 1;
      return 0;
   }
  bool operator > (ngaythangnam x)
   {  
      if (nam > x.nam)  return 1;
      if (thang > x.thang)  return 1;
      if (ngay > x.ngay)  return 1;
      return 0;
   }
  // Overload cac phep nhap xuat
   friend ostream & operator << (ostream &o, ngaythangnam x);
   friend istream & operator >>  (istream &i, ngaythangnam &x); 


};


// Overload kem theo cac yeu cau nhap xuat
ostream & operator << (ostream &o, ngaythangnam x)
{
  o << x.ngay << "-" << x.thang << "-" << x.nam << "\n";

  return o;
}

// Overload kem theo cac yeu cau nhap xuat
istream & operator >> (istream &i, ngaythangnam &x)
{
  cout << "Nhap nam = ";
  i >> x.nam;
  cout << "Nhap thang = ";
  i >> x.thang;
  cout << "Nhap ngay = ";
  i >> x.ngay;
  cout << endl;
  return i;
}
