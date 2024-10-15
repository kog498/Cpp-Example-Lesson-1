/*
Chuong trinh cua hang ban banh
Tac gia: Phan An Phu
Ngay: 15/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//Khai bao bien
	int so_banh_bong_lan;
	int so_banh_su;
	int gia_ban;
	int tong_so_banh_da_ban;
	int tong_so_tien_nhan_duoc;

	//Nhap du lieu
	cout << "Nhap so banh bong lan: ";
	cin >> so_banh_bong_lan;
	cout << "Nhap so banh su: ";
	cin >> so_banh_su;
	cout << "Nhap gia ban: ";
	cin >> gia_ban;

	//Tinh tong so banh da ban va so tien nhan duoc
	tong_so_banh_da_ban = so_banh_bong_lan + so_banh_su;
	tong_so_tien_nhan_duoc = tong_so_banh_da_ban * gia_ban;

	//In ket qua
	cout << "Tong so banh da ban: " << tong_so_banh_da_ban << endl;
	cout << "Tong so tien nhan duoc: " << tong_so_tien_nhan_duoc;

	string s;
	cin >> s;
	return 0;
}