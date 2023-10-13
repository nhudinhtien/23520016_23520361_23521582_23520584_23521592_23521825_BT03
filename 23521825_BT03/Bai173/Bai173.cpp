#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&, int&, int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);
int main() {
	int n, vt, l;
	int a[100];
	Nhap(a, n, vt, l);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "mang con la :";
	XuatCon(a, n, vt, l);
	return 0;
}
void Nhap(int a[], int& n, int& vt, int& l) {
	cout << "Nhap n : ";
	cin >> n;
	cout << "Nhap vt: ";
	cin >> vt;
	cout << "Nhap l: ";
	cin >> l;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand()%(200 + 1) - 100;
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
void XuatCon(int a[], int n, int vt, int l) {
	for (int i = 0; i < l; i++)
		cout << setw(6) << a[vt + i];
}