#pragma once
#include <iostream>
using namespace std;

class PS
{
    private:
        float TS,MS;

    public:
        void Nhap();
        void Xuat();
        PS Tong(PS b);
        PS Hieu(PS b);
        PS Tich(PS b);
        PS Thuong(PS b);
        PS();
        ~PS();
};