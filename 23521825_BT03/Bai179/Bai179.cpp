#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&, int&, int&);
void Xuat(int[], int);
int ktCon(int[], int, int, int);
void LietKe(int[], int);
int main() {
	int n, vt, l;
	int a[100];
	Nhap(a, n, vt, l);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "cac day con do la : ";
	LietKe(a, n);
	return 0;
}
void Nhap(int a[], int& n, int& vt, int& l) {
	cout << "Nhap n : ";
	cin >> n;
	cout << "Nhap vt: ";
	cin >> vt;
	cout << "Nhap l: ";
	cin >> l;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
int ktCon(int a[], int n, int vt, int l) {
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}
void LietKe(int a[], int n) {
	for (int l = 2; l <= n; l++) {
		for (int vt = 0; vt <= n - 1; vt++) {
			if (ktCon(a, n, vt, l) == 1) {
				for (int i = 0; i < l; i++)
					cout << setw(8) << a[vt + i];
				cout << "\n";
			}
		}
	}	
}