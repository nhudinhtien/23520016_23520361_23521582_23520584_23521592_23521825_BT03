#include<iostream>
#include<iomanip>
using namespace std;
void XoaViTri(float[], int&, int);
void XoaTrung(float[], int&, int);
int TanSuat(float[], int, float);
void XoaPhanTu(float[], int&);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int  n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout << endl << "Mang con lai sau khi xoa : " << endl;
	XoaPhanTu(a, n);
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
	return 0;
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		 a[i] = a[i + 1];
	 n--;
}

void XoaTrung(float a[], int& n, float x)
{
	 for (int i = n - 1; i >= 0; i--)
		 if (a[i] == x)
		     XoaViTri(a, n, i);
}

int TanSuat(float a[], int n, float x)
{
	 int dem = 0;
	 for (int i = 0; i <= n - 1; i++)
		 if (a[i] == x)
	        dem++;
	 return dem;
}

void XoaPhanTu(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
	     if (TanSuat(a, n, a[i]) > 1)
		    XoaTrung(a, n, a[i]);
}

void Nhap(float a[], int& n)
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

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}
