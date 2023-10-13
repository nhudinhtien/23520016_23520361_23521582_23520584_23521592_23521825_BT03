#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void TimDoan(float[], int, float&, float&);
int main() {
	float a[100];
	int n;
	float x, y;
	Nhap(a, n);
	cout << "mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "Doan do la: ";
	TimDoan(a, n, x, y);
	return 0;
}
void Nhap(float a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0+ (rand()/ (RAND_MAX / (100.0 -(-100.0))));
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(2) << a[i];
}
float LonNhat(float a[], int n) {
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
float NhoNhat(float a[], int n) {
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void TimDoan(float a[], int n, float& x, float& y) {
	x = NhoNhat(a, n);
	y = LonNhat(a, n);
	cout << "[" << x << ";" << y << "]";
}