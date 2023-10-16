#include<iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void XoaViTri(float[], int&, int);
void Xuat(float[], int);

int main()
{
	float b[100];
	int n;
	int k;
	Nhap(b, n);
	cout << "Mang ban dau: ";
	Xuat(b, n);
	cout << "\nNhap chi so can xoa: ";
	cin >> k;
	XoaViTri(b, n, k);
	cout << "\nMang luc sau: ";
	Xuat(b, n);
	return 0;
}
void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(2);
}