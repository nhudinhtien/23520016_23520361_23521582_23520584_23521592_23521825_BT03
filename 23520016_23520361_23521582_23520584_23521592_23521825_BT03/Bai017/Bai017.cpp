#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);
int main() {
	int n;
	int a[100];
	Nhap(a, n);
	cout << "\n Mang cac so la: ";
	Xuat(a, n);
	cout << endl;
	LietKe(a, n);
	return 0;
}
void Nhap(int a[], int &n) {
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << setw(5) << a[i];
	}
}
void LietKe(int a[], int n) {
	cout << "Day cac so chan la: ";
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0) 
			cout << setw(5) << a[i];
	cout << endl;
	cout << "Day cac so le la: ";
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			cout << setw(5) << a[i];
}