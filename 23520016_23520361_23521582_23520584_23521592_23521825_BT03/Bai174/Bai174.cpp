#include<iostream>
#include<iomanip>
using namespace std;
void XuatCon(int[], int, int, int);
void XuatCon(int[], int, int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int  n,l;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout << "\n""Nhap so phan tu mang con : ";
	cin >> l;
	cout << "\n" "Cac mang con : " << endl;
	XuatCon(a,n,l);
	return 0;
}

void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		 cout << setw(8) << a[vt + i];
}

void XuatCon(int a[], int n, int l)
{
	for (int vt = 0; vt <= n - l; vt++)
	{
		cout << endl;
		XuatCon(a, n, vt, l);
	}
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


