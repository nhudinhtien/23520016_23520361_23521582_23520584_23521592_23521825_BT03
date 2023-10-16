#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ChanDau(int[], int);
int ChanLonNhat(int[], int);
void LietKe(int[], int);
int main() {
	int n;
	int a[100];
	Nhap(a, n);
	cout << "mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "vi tri so chan lon nhat la: ";
	LietKe(a, n);
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
int ChanDau(int a[], int n) {
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}
int ChanLonNhat(int a[], int n) {
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	return lc;
}
void LietKe(int a[], int n) {
	int dd = ChanLonNhat(a, n);
	if (dd == -1) {
		cout << "\n Khong co so chan ";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == dd)
			cout << i;
	}
}