#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&, int[], int&);
void Xuat(int[], int, int[], int);
void HoanVi(int&, int&);
void SapTang(int[], int);
int ktHoanVi(int[], int, int[], int);
int main() {
	int a[100], b[100];
	int n, m;
	Nhap(a, n, b, m);
	cout << "Mang 2 day cac so la: ";
	Xuat(a, n, b, m);
	cout << endl;
	SapTang(a, n);
	cout << "b co phai hoan vi cua a khong:  ";
	cout << ktHoanVi(a, n, b, m);
	return 0;
}
void Nhap(int a[], int& n, int b[], int& m) {
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
	for (int i = 0; i < m; i++)
		b[i] = rand() % (200 + 1) - 100;
}
void Xuat(int a[], int n, int b[], int m) {
	cout << "Day a la : ";
	for (int i = 0; i < n; i++)
		cout <<  setw(6) << a[i];
	cout << endl;
	cout << "Day b la: ";
	for (int i = 0; i < m; i++)
		cout << setw(6) << b[i];
}
void HoanVi(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void SapTang(int a[], int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
int ktHoanVi(int a[], int n, int b[], int m) {
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}