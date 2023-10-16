#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void SapTang(float[], int);
int main() {
	int n;
	float a[100];
	float x, y;
	Nhap(a, n);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	HoanVi(x, y);
	SapTang(a, n);
	cout << "mang sau khi sap tang: ";
	Xuat(a, n);
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
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(2) << a[i];
}
void HoanVi(float& x, float& y) {
	float temp = x;
	x = y;
	y = temp;
}
void SapTang(float a[], int n) {
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j]) 
				HoanVi(a[i], a[j]);
}