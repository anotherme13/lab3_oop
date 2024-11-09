#include<bits/stdc++.h>
using namespace std;
class phanso{
    private:
        int tu,mau;
    public:
        phanso()    // Constructor mac dinh voi phan so  = 0
        {
            tu = 0;
            mau = 1;
        };
        phanso(int _tu, int _mau)      // Constructor co tham so
        {
            int v = __gcd(_tu,_mau);
            tu = _tu / v;
            mau = _mau / v;
        }
       
        // Constructor cho kieu so nguyen (co tham so) -> dung de ep kieu 1 so nguyen thanh phan so
        phanso(int m) 
        {
            tu = m;
            mau = 1;
        }

        // Cac phep so sanh 2 phan so 
        bool operator == (const phanso &another)   
        {
            return tu * another.mau == mau * another.tu;
        }
        bool operator != (const phanso &another)
        {
            return tu * another.mau != mau * another.tu;
        }
        bool operator < (const phanso &another)
        {
            return tu * another.mau < mau * another.tu;
        }
        bool operator > (const phanso &another)
        {
            return tu * another.mau > mau * another.tu;
        }
         bool operator <= (const phanso &another)
        {
            return tu * another.mau <= mau * another.tu;
        }
         bool operator >= (const phanso &another)
        {
            return tu * another.mau >= mau * another.tu;
        }
        // Doi voi cac phep +,-,*,/, cin, cout ta can khai bao friend de handle cac truong hop so vs phan so, 
        // phan so vs so, phan so vs phanso
        friend phanso operator + (phanso a, phanso b);
        friend phanso operator - (phanso a, phanso b);
        friend phanso operator * (phanso a, phanso b);
        friend phanso operator / (phanso a, phanso b);
        friend ostream & operator << (ostream &o, phanso a);
        friend istream & operator >> (istream &o, phanso &a);
};

// Overload >> kem theo yeu cau rieng cua bai toan
istream & operator >> (istream &o, phanso &a)
{
    cout << "Nhap vao tu so: ";
    o >> a.tu;
    cout << "Nhap vao mau so (khac 0): ";
    o >> a.mau;
    return o;
}
// Overload << kem theo yeu cau rieng cua bai toan
ostream & operator << (ostream &o, phanso a)
{
    cout << "Tu so: ";
    o << a.tu;
    cout << endl;
    cout << "Mau so: ";
    o << a.mau;
    cout << endl;
    return o;

}
// Overload cac phep +,-,*,/
phanso operator+(phanso a, phanso b)
{
    return phanso((a.tu * b.mau + a.mau * b.tu),a.mau * b.mau);
}

phanso operator-(phanso a, phanso b)
{
    return phanso((a.tu * b.mau - a.mau * b.tu),a.mau * b.mau);
}

phanso operator*(phanso a, phanso b)
{
    return phanso(a.tu * b.tu,a.mau * b.mau);
}

phanso operator/(phanso a, phanso b)
{
    return phanso(a.tu * b.mau,a.mau * b.tu);
}
