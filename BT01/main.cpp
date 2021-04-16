#include "PS.h"

int main()
{
    PS ps1;
    ps1.Nhap();
    ps1.Xuat();
    PS ps2;
    ps2.Nhap();
    ps2.Xuat();
    // Tong 2 phan so
    PS tong;
    tong = ps1.Tong(ps2);
    cout << "Tong 2 phan so";
    tong.Xuat();
    // Hieu 2 phan so
    PS hieu;
    hieu = ps1.Hieu(ps2);
    cout << "Hieu 2 phan so";
    hieu.Xuat();
    // Tich 2 phan so 
    PS tich;
    tich = ps1.Tich(ps2);
    cout << "Tich 2 phan so";
    // Thuong 2 phan so
    PS thuong;
    thuong = ps1.Thuong(ps2);
    cout << "Thuong 2 phan so";
    thuong.Xuat();
}