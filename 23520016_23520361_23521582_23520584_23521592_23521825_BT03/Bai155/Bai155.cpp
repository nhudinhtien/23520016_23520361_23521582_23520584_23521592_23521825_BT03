#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void DaoMang(int&, int&);
void DaoChan(int[], int);
int main() {
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	DaoChan(a, n);
	cout << "Mang sau khi doi la: ";
	Xuat(a, n);
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
void DaoMang(int& x, int& y) {
	float temp = x;
	x = y;
	y = temp;
	
}
void DaoChan(int a[], int n) {
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] %2==0 && a[j]%2==0)
				DaoMang(a[i], a[j]);
}