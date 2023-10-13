#include<iostream>
#include<iomanip>
using namespace std;
void XoaViTri(int[], int&, int);
void XoaChan(int[], int&);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int  n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout << "\n" "Mang con lai sau xoa chan : " << endl;
	XoaChan(a, n);
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
	return 0;
}

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaChan(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
	    if (a[i] % 2 == 0)
		    XoaViTri(a, n, i);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang : ";
	cin >> n;
	cout << "Mang ban dau : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}


