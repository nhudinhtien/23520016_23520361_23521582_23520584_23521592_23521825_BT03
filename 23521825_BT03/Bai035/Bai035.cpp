#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int hc(int);
int TongGiaTri(int[], int);
int main() {
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "tong la: ";
	cout << TongGiaTri(a, n);
	return 0;
}
void Nhap(int a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
int hc(int n) {
	int t = abs(n);
	return (t / 10) % 10;
}
int TongGiaTri(int a[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++)
		if (hc(a[i]) == 5)
			s += a[i];
	return s;
}