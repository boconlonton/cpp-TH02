#include "Complex.h"
using namespace std;

int main()
{
    Complex c1;
    Complex c2;
    Complex tong;
    Complex hieu;
    Complex tich;
    Complex thuong;
    cout << "Nhap so phuc thu nhat:" << endl;
    c1.Nhap();
    c1.Xuat();
    cout << "Nhap so phuc thu hai:" << endl;
    c2.Nhap();
    c2.Xuat();

    tong = c1.Tong(c2);
    cout << "Tong = " << endl;
    tong.Xuat();

    hieu = c1.Hieu(c2);
    cout << "Hieu = " << endl;
    hieu.Xuat();

    tich = c1.Tich(c2);
    cout << "Tich = " << endl;
    tich.Xuat();

    thuong = c1.Thuong(c2);
    cout << "Thuong = " << endl;
    thuong.Xuat();

    return 1;
}