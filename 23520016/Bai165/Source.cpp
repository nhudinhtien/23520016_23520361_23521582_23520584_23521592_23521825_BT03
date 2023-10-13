#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[], int &n);
void Xuat(float a[], int n);
void XoaViTri(float a[], int &n, int k);
float LonNhat(float a[], int n);
void XoaLonNhat(float a[], int &n);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	XoaLonNhat(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void XoaViTri(float a[], int &n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

void XoaLonNhat(float a[], int &n)
{
	float ln = LonNhat(a, n);
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == ln)
			XoaViTri(a, n, i);
}