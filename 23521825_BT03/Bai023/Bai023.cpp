#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void Lietke(int[], int);
int main() {
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang cac so la: ";
	Xuat(a, n);
	cout << "Day cac so chan co it nhat mot lan can cung la gia tri chan la: " << endl;
	Lietke(a, n);
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
		cout << setw(5) << a[i];
	cout << endl;
}
void Lietke(int a[], int n) {
	if (n <= 1)
		return;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0];
	for (int i = 1; i < n - 1; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << setw(6) << a[i];
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		cout << setw(6) << a[n - 1];
}