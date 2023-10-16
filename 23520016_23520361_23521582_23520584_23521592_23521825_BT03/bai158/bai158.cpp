#include<iostream>
#include<time.h>
#include <iomanip>
#define MAX 1000
using namespace std;
void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
	return;
}
void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i <= n - 2; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}
int main()
{
	int n;
	float a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	DichTrai(a, n);
	Xuat(a, n);
	cout << endl;
	return 0;
}