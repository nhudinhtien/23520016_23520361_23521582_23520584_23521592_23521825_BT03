#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int HoanThienCuoi(int[], int);
int main() {
	int n, k;
	int a[100];
	Nhap(a, n);
	cout << "mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "So hoan thien cuoi cung la: ";
	cout << HoanThienCuoi(a, n);
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
bool ktHoanThien(int k) {
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}
int HoanThienCuoi(int a[], int n) {
	for (int i = n - 1; i >= 0; i--)
		if (ktHoanThien(a[i]))
			return a[i];
	return -1;
}