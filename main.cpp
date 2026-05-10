#include "KhachHang.h"
#include <bits/stdc++.h>

using namespace std;

int main () {
    ifstream fIn ("XYZ.INP");
    ofstream fOut ("XYZ.OUT");

    if (!fIn || !fOut) {
        return 1;
    }

    int x, y, z;

    fIn >> x >> y >> z;
    fOut << fixed << setprecision(0);
    vector <KhachHang*> ds;

    long double doanhThu = 0;

    for (int i = 0; i < x; i++) {
        KhachHang* A = new KhachHangA;
        A->nhap(fIn);
        A->tinhTien();
        ds.push_back(A);
    }
    cout << '\n';
    for (int i = 0; i < y; i++) {
        KhachHang* B = new KhachHangB;
        B->nhap(fIn);
        B->tinhTien();
        ds.push_back(B);
    }
    cout << '\n';
    for (int i = 0; i < z; i++) {
        KhachHang* C = new KhachHangC;
        C-> nhap(fIn);
        C->tinhTien();
        ds.push_back(C);
    }
    fOut << x << " " << y << " " << z << '\n';

    for (KhachHang* kh: ds) {
        if (dynamic_cast<KhachHangA*> (kh)) {
            kh->xuat(fOut);
            fOut << kh->tinhTien() << "\n";
            doanhThu+= kh->tinhTien();
        } 
    }
    for (KhachHang* kh: ds) {
        if (dynamic_cast<KhachHangB*> (kh)) {
            kh->xuat(fOut);
            fOut << kh->tinhTien() << "\n";
            doanhThu+= kh->tinhTien();
        } 
    }
    for (KhachHang* kh: ds) {
        if (dynamic_cast<KhachHangC*> (kh)) {
            kh->xuat(fOut);
            fOut << kh->tinhTien() << "\n";
            doanhThu+= kh->tinhTien();
        } 
    }
    fOut << "Tong DOANH THU: " << doanhThu << '\n';
    for (KhachHang* kh : ds) {
        delete kh;
    }
    ds.clear();
    fIn.close();
    fOut.close();
    return 0;
}