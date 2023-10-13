#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void InterchangeSort(int[], int);
int main() {
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "Mang tang dan theo phien ban 06: ";
	InterchangeSort(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
void InterchangeSort(int a[], int n) {
	if (n <= 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	InterchangeSort(a, n - 1);
}