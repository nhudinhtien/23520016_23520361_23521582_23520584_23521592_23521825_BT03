#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int [], int&, int &, int&);
void Xuat(int [], int);
int DauTien(int[], int, int, int);
int main() {
	int n, x, y;
	int a[100];
	Nhap(a, n, x, y);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "Gia tri la: ";
	cout << DauTien(a, n, x, y);
	return 0;
}
void Nhap(int a[], int& n, int& x, int& y) {
	cout << "Nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	cout << "Nhap y:";
	cin >> y;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
int DauTien(int a[], int n , int x, int y) {
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}