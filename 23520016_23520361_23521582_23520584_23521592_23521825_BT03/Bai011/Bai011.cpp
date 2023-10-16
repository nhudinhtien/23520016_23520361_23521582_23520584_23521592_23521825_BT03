#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang3m(int);
void LietKe(int[], int);
int ktraLK(int, int);
int main() {
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang 1 chieu la:";
	Xuat(a, n);
	cout << endl;
	cout << "Day so co dang 3m la: ";
	LietKe(a, n);
	return 0;
}
void Nhap(int a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n-1; i++) {
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n) {
	for (int i = 0; i <= n-1; i++)
		cout << setw(5) << a[i];
}
bool ktDang3m(int n) {
	if (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1) {
		int du = t % 3;
		if (du != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}
int ktraLK( int a[], int n) {
	for (int i = 0; i < n; i++)
		if (ktDang3m(a[i]))
			return a[i];
	return 0;
}
void LietKe(int a[], int n) {
	for (int i = 0; i <= n - 1; i++)
		if (ktDang3m(a[i]))
			cout << setw(6) << a[i];
	cout << ktraLK(a, n);
}