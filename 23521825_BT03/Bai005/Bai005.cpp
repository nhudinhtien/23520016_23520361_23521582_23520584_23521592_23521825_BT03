#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void Lietke(int[], int);
int main() {
	int a[100];
	int k;
	Nhap(a, k);
	cout << "\n Mang cac so la: ";
	Xuat(a, k);
	cout << "\n Cac gia tri chan la: ";
	Lietke(a, k);
	return 0;
}
void Nhap(int a[], int& k) {
	cout << "Nhap k: ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < k; i++) {
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int k) {
	for (int i = 0; i < k; i++)
		cout << setw(8) << a[i];
}
void Lietke(int a[], int k) {
	for (int i = 0; i < k; i++)
		if (a[i] % 2 == 0)
			cout << setw(8) << a[i];
}