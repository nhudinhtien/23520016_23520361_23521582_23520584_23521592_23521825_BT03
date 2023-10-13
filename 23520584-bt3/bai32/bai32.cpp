#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
int main() {
	int n;
	float a[195];
	Nhap(a, n);
	cout << "cac so la: " << endl;
	Xuat(a, n);
	cout << " cac bo ba gia tri (x,y,z) thoa dieu kien x=y+z la ";
	LietKe(a, n);
	return 0;
}
void Nhap(float a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int g = 0; g < n; g++)
		a[g] = rand() % (200 + 1) - 100;
}
void Xuat(float a[], int n) {
	for (int g = 0; g < n; g++)
		cout << setw(6) << a[g] << endl;
}
void LietKe(float a[], int n) {
	for (int i = 0; i <= n - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			for (int k = 0; k <= n - 1; k++) {
				if (i != j && j != k && i != k && a[i] == a[j] + a[k])
				{
					cout << "(" << a[i] << "," << a[j] << "," << a[k] << ")" << endl;
				}
			}
		}
	}
}
