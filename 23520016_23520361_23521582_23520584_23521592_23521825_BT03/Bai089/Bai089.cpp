#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
int NguyenToDau(int[], int);
int main() {
	int n, k;
	int a[100];
	Nhap(a, n);
	cout << "Mang day cac so: ";
	Xuat(a, n);
	cout << endl;
	cout << "So nguyen to dau tien la: ";
	cout << NguyenToDau(a, n);
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
bool ktNguyenTo(int k) {
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int NguyenToDau(int a[], int n) {
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			return a[i];
	return 0;
}