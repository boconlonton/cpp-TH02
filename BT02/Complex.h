#pragma once
#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    float imag;
    float real;

public:
    void Nhap();
    void Xuat();
    Complex Tong(Complex c2);
    Complex Hieu(Complex c2);
    Complex Tich(Complex c2);
    Complex Thuong(Complex c2);

    Complex();
    ~Complex();
};