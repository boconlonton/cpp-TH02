#include "TestCandidate.h"
#include "Candidate.h"

void TestCandidate::NhapGiaTri()
{
    cout << "Nhap So Thi Sinh: ";
    cin >> SoThiSinh;
}

Candidate *TestCandidate::Nhap()
{
    Candidate *arr_uv;
    arr_uv = new Candidate[SoThiSinh];
    for (int i = 0; i < SoThiSinh; i++)
    {
        Candidate ung_vien;
        cout << "Thi sinh thu " << i + 1 << endl;
        ung_vien.Nhap();
        arr_uv[i] = ung_vien;
    };
    return arr_uv;
}

void TestCandidate::ThucThi(Candidate *arr_uv)
{
    for (int i = 0; i < SoThiSinh; i++)
    {
        if (arr_uv[i].TongDiem() > 15)
        {
            arr_uv[i].Xuat();
        }
    }
}

TestCandidate::TestCandidate(){};
TestCandidate::~TestCandidate(){};