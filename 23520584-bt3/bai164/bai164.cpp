#include<iostream>
#include<time.h>
#include <iomanip>
#define MAX 1000
using namespace std;
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
	return;
}
bool ktChinhPhuong(int n)
{
	for(int i = 1; (i * i) <= n; i++)
		if (i * i == n)
		return true;
	return false;
}
void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaChinhPhuong(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktChinhPhuong(a[i]))
			XoaViTri(a, n, i);
}
int main()
{
	int n, k{}, a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	XoaViTri(a, n, k);
	Xuat(a, n);
	cout << endl;
	return 0;
}