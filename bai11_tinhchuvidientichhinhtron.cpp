// bai11_tinhchuvidientichhinhtron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "tinh chu dien tich hinh tron:";
	
	double pi, chuvi, dientich, bankinh;
	pi = 3, 14;
	cout << "nhap ban kinh:";
	cin >> bankinh;
	
	
	chuvi = 2 * pi * bankinh;
	dientich = pi * (bankinh * bankinh);
	cout << "chu vi hinh tron la:" << chuvi << endl;
	cout << "dien tich hinh tron la:" << dientich << endl;
	return 0;
}


