#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&, int&, int&);
void Xuat(float[], int);
int ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int, int&, int&);
int main() {
	int n, vt, l;
	float a[100];
	Nhap(a,n, vt, l);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "Mang so duong con dai nhat la: ";
	DuongDaiNhat(a, n, vt, l);
	if (vt != -1 && l != -1)
		for (int i = vt; i <= l; i++)
			cout << setw(8) << setprecision(2) << a[i];
	else
		cout << "Khong tim thay mang con duy nhat";
	return 0;
}
void Nhap(float a[], int& n, int& vt, int& l) {
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap vt";
	cin >> vt;
	cout << "Nhap l: ";
	cin >> l;
	srand(time(NULL));

	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(2) << a[i];
}
int ktCon(float a[], int n, int vt, int l) {
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}
void DuongDaiNhat(float a[], int n, int& vtd, int &vtc) {
	for(int l=n;l>=1;l--)
		for(int vt=0;vt<=n-l;vt++)
			if (ktCon(a, n, vt, l) == 1) {
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}