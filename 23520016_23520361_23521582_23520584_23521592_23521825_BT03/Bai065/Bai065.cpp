#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int DemPhanBiet(float[], int);
int main() {
	int n;
	float a[100];
	Nhap(a, n);
	cout << "mang day cac so la : ";
	Xuat(a, n);
	cout << endl;
	cout << "so luong gia tri phan biet co trong mang la: ";
	cout << DemPhanBiet(a, n);
	return 0;
}
void Nhap(float a[], int&n){
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(2) << a[i];
}
int DemPhanBiet(float a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}