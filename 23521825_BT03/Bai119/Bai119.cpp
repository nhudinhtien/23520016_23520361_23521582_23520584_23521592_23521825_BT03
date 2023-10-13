#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ktTonTai(int[], int);
int main() {
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "Kiem tra  1-> co chan; 0-> khong co chan: ";
	cout << ktTonTai(a, n);
	return 0;
}
void Nhap(int a[], int &n) {
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
int ktTonTai(int a[], int n) {
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			flag = 1;
	return flag;
}