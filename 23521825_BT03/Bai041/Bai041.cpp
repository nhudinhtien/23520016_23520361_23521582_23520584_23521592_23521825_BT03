#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TongGiaTri(float[], int);
int main() {
	float a[100];
	int n;
	Nhap(a, n);
	cout << "mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "Tong la: ";
	cout << TongGiaTri(a, n);
	return 0;
}
void Nhap(float a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Xuat(float a[], int n) {
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(2) << a[i];
}
float TongGiaTri(float a[], int n) {
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[i - 1])
			s = s + a[i];
	return s;
}