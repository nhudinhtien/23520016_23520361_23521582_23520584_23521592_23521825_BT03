#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrung(float[], int&);
int main(){
	int n, k;
	float a[100];
	Nhap(a, n);
	cout << "Mang day cac so: ";
	Xuat(a, n);
	cout << endl;
	XoaTrung(a, n);
	cout << "Mang sau khi xoa so turng la: ";
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
void XoaViTri(float a[], int& n, int k) {
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaTrung(float a[], int& n) {
	for (int i = n - 1; i >= 0; i--) {
		int flag = 0;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 1;
		if (flag == 1)
			XoaViTri(a, n, i);
	}
}