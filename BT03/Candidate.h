#pragma once
#include <iostream>
#include <string>
using namespace std;

class Candidate
{
    private:
        int Ma;
        string Ten;
        string NgaySinh;
        float DiemToan;
        float DiemVan;
        float DiemAnh;

    public:
        void Nhap();
        void Xuat();
        float TongDiem();
        Candidate();
        ~Candidate();
};