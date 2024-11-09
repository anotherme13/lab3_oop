#include<bits/stdc++.h>
using namespace std;
class sophuc{
  protected:
    double thuc,ao;
  public:
    sophuc()  // Constructor mac dinh
    {
      thuc = 0;
      ao = 0;
    }
    sophuc(double x, double y) // Constructor co tham so
    {
      thuc = x;
      ao = y;
    }
    // Cac phep toan duoc overload danh cho plop so phuc
    bool operator == (sophuc &another)
    {
      return (thuc == another.thuc && another.ao == ao); 
    }
    bool operator != (sophuc &another)
    {
      return (thuc != another.thuc | another.ao != ao); 
    }
    // Rieng nhung phep toan nay duoc khai bao friend de handle cac truong hop sophuc vs sophuc, sophuc vs sothuc
    // sothuc vs sophuc,... Thay vi viet 3 ham ta viet lai 1 ham cho moi phep tinh 
    friend sophuc operator + (sophuc a, sophuc b);
    friend sophuc operator - (sophuc a, sophuc b);
    friend sophuc operator * (sophuc a, sophuc b);
    friend sophuc operator / (sophuc a, sophuc b);
    friend ostream & operator << (ostream &o, sophuc x);
    friend istream & operator >> (istream &i, sophuc &x);

};
// overload >> kem voi yeu cau cua bai toan nhap xuat
istream & operator >> (istream &i, sophuc &x)
{
  cout << "Nhap phan thuc cua so phuc: ";
  i >> x.thuc;
  cout << "Nhap phan ao cua so thuc: ";
  i >> x.ao;
  return i;
}
// overload >> kem voi yeu cau cua bai toan nhap xuat
ostream & operator << (ostream &o, sophuc x)
{
  if (x.ao >= 0)  o << x.thuc <<"+" << x.ao << "i";
  else            o << x.thuc   << x.ao << "i";
  cout << endl;
  return o;
}
// Overload cac phep toan cua lop so phuc
sophuc operator + (sophuc x, sophuc y)
{
  return sophuc(x.thuc + y.thuc,x.ao + y.ao);
}
sophuc operator - (sophuc x, sophuc y)
{
  return sophuc(x.thuc - y.thuc,x.ao - y.ao);
}
sophuc operator * (sophuc x, sophuc y)
{
  return sophuc(x.thuc * y.thuc - x.ao * y.ao ,
                x.ao * y.thuc + x.thuc * y.ao);
}
sophuc operator / (sophuc x, sophuc y)
{
  double a = x.thuc;
  double b = x.ao;
  double c = y.thuc;
  double d = y.ao;
  return sophuc((a * c + b * d) / (c * c + d * d),
                (b * c - a * d) / (c * c + d * d));
}