#include "Complex.h"

void Complex::Nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> this->real;
    cout << "Nhap phan ao: ";
    cin >> this->imag;
}

void Complex::Xuat()
{
    cout << "=> " << real << " + " << imag << "j" << endl;
}

Complex Complex::Tong(Complex c2)
{
    Complex tong;
    tong.imag = this->imag + c2.imag;
    tong.real = this->real + c2.real;
    return tong;
}

Complex Complex::Hieu(Complex c2)
{
    Complex hieu;
    hieu.imag = this->imag - c2.imag;
    hieu.real = this->real - c2.real;
    return hieu;
}

Complex Complex::Tich(Complex c2)
{
    Complex tich;
    tich.imag = (this->imag * c2.imag) - (this->real * c2.real);
    tich.real = (this->real * c2.imag) + (this->imag * c2.real);
    return tich;
}

Complex Complex::Thuong(Complex c2)
{
    Complex thuong;
    thuong.imag = ((this->imag * c2.imag) + (this->real * c2.real)) / (c2.imag * c2.imag + c2.real * c2.real);
    thuong.real = ((this->imag * c2.real) - (this->real * c2.imag)) / (c2.imag * c2.imag + c2.real * c2.real);
    return thuong;
}

Complex::Complex(){};
Complex::~Complex(){};