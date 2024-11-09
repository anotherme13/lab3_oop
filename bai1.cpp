#include<bits/stdc++.h>
#include "phanso.h"
using namespace std;
int main()
{
    phanso x,y;
    cout << "Nhap thong tin phan so 1\n";
    cin >> x;
    cout << "Nhap thong tin phan so 2\n";
    cin >> y;
    cout << "Ket qua x + y\n" << (x + y);
    cout << "Ket qua x - y\n" << (x - y);
    cout << "Ket qua x * y\n" << x * y;
    cout << "Ket qua x / y\n" << x / y;
    cout << "Ket qua (x > y)\n" << (x > y) << endl;
    cout << "Ket qua (x >= y)\n" << (x >= y) << endl;
    cout << "Ket qua (x < y)\n" << (x < y) << endl;
    cout << "Ket qua (x <= y)\n" << (x <= y) << endl;
    cout << "Ket qua (x == y)\n" << (x == y) << endl;
    cout << "Ket qua (x != y)\n" << (x != y);
}