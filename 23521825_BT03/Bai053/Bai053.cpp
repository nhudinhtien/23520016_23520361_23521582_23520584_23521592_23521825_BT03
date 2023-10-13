#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&, float&);
void Xuat(float[], int);
int TanSuat(float[], int, float);
int main() {
	int n;
	float a[100], x;
	Nhap(a, n, x);
	cout << "Mang day cac so: ";
	Xuat(a, n);
	cout << endl;
	cout << "tan suat la: ";
	cout << TanSuat(a, n, x);
	return 0;
}
void Nhap(float a[], int& n, float& x) {
	cout << "Nhap x: ";
	cin >> x;
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
int TanSuat(float a[], int n, float x) {
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}