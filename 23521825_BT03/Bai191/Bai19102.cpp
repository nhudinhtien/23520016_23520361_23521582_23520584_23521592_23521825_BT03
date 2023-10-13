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
	cout << "Mang tang dan theo phien ban 02: ";
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
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j >= i + 1; j--)
			if(a[i]>a[j])
				swap(a[i], a[j]);
}