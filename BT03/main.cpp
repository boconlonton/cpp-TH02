#include "Candidate.h"
#include "TestCandidate.h"

int main()
{
    // Candidate ung_vien;
    // ung_vien.Nhap();
    // ung_vien.Xuat();
    TestCandidate test_case;
    test_case.NhapGiaTri();
    Candidate *arr_in = test_case.Nhap();
    test_case.ThucThi(arr_in);
    return 1;
}