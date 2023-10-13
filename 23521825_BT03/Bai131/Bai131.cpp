#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DemGiaTri(int[], int);
int main() {
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "So chu so la: ";
	cout << DemGiaTri(a, n);
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
int DemGiaTri(int a[], int n) {
	int dem = 0;
	for (int i = 1; i < n; i++) {
		int flag = 1;
		for (int j = 0; j <i; j++)
			if (a[j] >= a[i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}