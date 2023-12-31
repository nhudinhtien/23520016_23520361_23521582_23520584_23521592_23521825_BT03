#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int &, float &);
void Xuat(float[], int);
float TongGiaTri(float[], int, float);
int DemGiaTri(float[], int, float);
float TrungBinhCong(float[], int, float);
int main() {
	int n;
	float a[100];
	float x;
	Nhap(a, n, x);
	cout << "mang day cac so la:  ";
	Xuat(a, n);
	cout << endl;
	cout << "trung binh cong la: ";
	cout << TrungBinhCong(a, n, x);
	return 0;
}
void Nhap(float a[], int& n, float& x) {
	cout << "nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Xuat(float a[], int n){
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(2) << a[i];
}
float TongGiaTri(float a[], int n, float x) {
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			s = s + a[i];
	return s;
}
int DemGiaTri(float a[], int n, float x) {
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			dem = dem + 1;
	return dem;
}
float TrungBinhCong(float a[], int n, float x) {
	float s = TongGiaTri(a, n, x);
	int dem = DemGiaTri(a, n, x);
	if (dem == 0)
		return 0;
	return s / dem;
}