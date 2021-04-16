#include "Candidate.h"

void Candidate::Nhap()
{
    cout << "Nhap Ma: ";
    cin >> Ma;
    cout << "Nhap Ten: ";
    cin >> Ten;
    cout << "Nhap Ngay sinh: ";
    cin >> NgaySinh;
    cout << "Nhap Diem Toan: ";
    cin >> DiemToan;
    cout << "Nhap Diem Van: ";
    cin >> DiemVan;
    cout << "Nhap Diem Anh: ";
    cin >> DiemAnh;
}

void Candidate::Xuat()
{
    cout << "Ten: " << Ten << endl;
    cout << "NgaySinh: " << NgaySinh << endl;
    cout << "DiemToan: " << DiemToan << endl;
    cout << "DiemVan: " << DiemVan << endl;
    cout << "DiemAnh: " << DiemAnh << endl;
}

float Candidate::TongDiem()
{
    float kq;
    kq = DiemToan + DiemVan + DiemAnh;
    return kq;
}

Candidate::Candidate(){};
Candidate::~Candidate(){};