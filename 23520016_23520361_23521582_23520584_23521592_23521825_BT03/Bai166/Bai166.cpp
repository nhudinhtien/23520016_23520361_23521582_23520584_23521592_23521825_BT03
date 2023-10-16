#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrungX(float[], int&, float);


int main()
{
	float b[100];
	int n;
	int x;
	Nhap(b, n);
	cout << "Mang ban dau: ";
	Xuat(b, n);
	cout << "\nNhap gia tri can xoa: ";
	cin >> x;
	XoaTrungX(b, n, x);
	cout << "\nMang luc sau: ";
	Xuat(b, n);
	return 0;
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
void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaTrungX(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}