#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&, int[], int&);
void Xuat(int[], int, int[], int);
int DemXuatHien(int[], int, int[], int);
int main() {
	int a[100], b[100], n1, n2;
	Nhap(a, n1, b, n2);
	cout << "Mang cac day so la : ";
	Xuat(a, n1, b, n2);
	cout << endl;
	cout << "So lan xuat hien mang a trong mang b la: ";
	cout << DemXuatHien(a, n1, b, n2);
	return 0;
}
void Nhap(int a[], int& n1, int b[], int& n2) {
	cout << "Nhap n1: ";
	cin >> n1;
	cout << "nhap n2: ";
	cin >> n2;
	srand(time(NULL));
	for (int i = 0; i < n1; i++)
		a[i] = rand() % (200 + 1) - 100;
	for (int i = 0; i < n2; i++)
		b[i] = rand() % (200 + 1) - 100;
}
void Xuat(int a[], int n1, int b[], int n2) {
	for (int i = 0; i < n1; i++)
		cout << setw(6) << a[i];
	cout << endl;
	for (int i = 0; i < n2; i++)
		cout << setw(6) << b[i];
}
int DemXuatHien(int a[], int n1, int b[], int n2) {
	if (n1 > n2)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= n2 - n1; vt++) {
		int flag = 1;
		for (int i = 0; i < n1; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}