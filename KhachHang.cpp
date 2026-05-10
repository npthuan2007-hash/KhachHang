#include "KhachHang.h"
#include "vector"
#include <iomanip>

KhachHang::KhachHang() {
    hoTen = "";
    donGia = 0;
    soLuong = 0;
}
KhachHang::~KhachHang() {}

void KhachHang:: nhap(istream& in) {
    in.ignore();
    getline(in, hoTen);
    in >> soLuong;
    in >> donGia;
}

void KhachHang:: xuat(ostream& out) {
    out << "Ho Ten: " << hoTen << ". So luong don hang: " << soLuong << ". Don gia: " << donGia << '\n';
}

void KhachHangB:: nhap (istream& in) {
    KhachHang:: nhap(in);
    in >> soNamThanThiet;
    cout << '\n';
}

long double KhachHangA:: tinhTien() {
    return (this-> soLuong * this-> donGia) + (this-> soLuong * this-> donGia) * 0.1;
}

long double KhachHangB:: tinhTien() {
    double saleRate = max (this-> soNamThanThiet * 0.05, 0.5);
    return (this-> soLuong * this-> donGia) * (1 - saleRate) + (this-> soLuong * this-> donGia) * (1 - saleRate) * 0.1;
}
long double KhachHangC:: tinhTien() {
    return (this-> soLuong * this-> donGia) * 0.5 + (this-> soLuong * this-> donGia) * 0.5 * 0.1; 
}
