#include "PS.h"

void PS::Nhap()
{
    cout << "Nhap TS:" << endl;
    cin >> TS;
    cout << "Nhap MS:" << endl;
    cin >> MS;
};

void PS::Xuat()
{
    cout << "TS = " << TS << endl;
    cout << "MS = " << MS << endl;
}

PS PS::Tong(PS b)
{
    PS kq;
    kq.TS = TS * b.MS + b.TS * MS;
    kq.MS = MS * b.MS;
    return kq;
};

PS PS::Hieu(PS b)
{
    PS kq;
    kq.TS = TS * b.MS - b.TS * MS;
    kq.MS = MS * b.MS;
    return kq;
}

PS PS::Tich(PS b)
{
    PS kq;
    kq.TS = TS * b.TS;
    kq.MS = MS * b.MS;
    return kq;
}

PS PS::Thuong(PS b)
{
    PS kq;
    kq.TS = TS * b.MS;
    kq.MS = MS * b.TS;
    return kq;
}

PS::PS(){};
PS::~PS(){};