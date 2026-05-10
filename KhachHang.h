#ifndef KHACHHANG_H
#define KHACHHANG_H
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;



class KhachHang {
protected:
    string hoTen;
    long long soLuong;
    long double donGia;
public:
    KhachHang();
    virtual ~KhachHang();
    virtual void nhap(istream& in);
    virtual void xuat(ostream& out);
    virtual long double tinhTien() = 0;
};

class KhachHangA: public KhachHang {
public:
    long double tinhTien() override;
};

class KhachHangB: public KhachHang {
private:   
    int soNamThanThiet;
public: 
    void nhap(istream& in) override;
    long double tinhTien() override;

};

class KhachHangC: public KhachHang {
public:
    long double tinhTien() override;
};
#endif 