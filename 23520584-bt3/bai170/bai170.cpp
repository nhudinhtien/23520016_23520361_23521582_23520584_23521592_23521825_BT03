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
void ThemBaoToan(float a[], int& n, float x)
{
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
}
int main()
{
	int n{};
	float a[MAX], x{};
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	ThemBaoToan(a,n,x);
	Xuat(a, n);
	cout << endl;
	return 0;
}