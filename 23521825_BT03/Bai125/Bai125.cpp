#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int ktTang(float[], int);
int main() {
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "Kiem tra  1-> Tang; 0-> khong tang: ";
	cout << ktTang(a,n);
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
		cout << setw(6) << setprecision(2) << a[i];
}
int ktTang(float a[], int n) {
	int flag = 1;
	if (a[0] > a[1])
		flag = 0;
	for (int i = 1; i < n - 1; i++)
		if (a[i] > a[i + 1])
			flag = 0;
	if (a[n - 2] > a[n - 1])
		flag = 0;
	return flag;
}