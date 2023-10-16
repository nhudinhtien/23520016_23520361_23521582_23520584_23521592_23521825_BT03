#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSo(int[], int, int []);
int main() {
	int n;
	int a[100];
	int dem[10] = { 0 };
	Nhap(a, n);
	cout << "Mang day cac so la: ";
	Xuat(a, n);
	cout << endl;
	cout << "chu so xuat hien nhieu nhat la: ";
	cout << ChuSo(a, n, dem);
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
int ChuSo(int a[], int n, int dem[]) {
	for (int i = 0; i < n; i++) {
		int t = abs(a[i]);
		while (t != 0) {
			int dv = t % 10;
			dem[dv]++;
			t = t / 10;
		}
	}
	int max = abs(a[0] % 10);
	for (int i = 0; i < 10; i++) {
		if (dem[i] != 0)
			if (dem[max] < dem[i])
				max = i;
	}
	return max;
}