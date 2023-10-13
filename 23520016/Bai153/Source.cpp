#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void ChanVeDau(int[], int);
void LeVeCuoi(int[], int);
void ChanDauLeCuoi(int[], int);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	ChanDauLeCuoi(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void ChanVeDau(int a[], int n) 
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] != 0) 
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}

void LeVeCuoi(int a[], int n) 
{
	int vt = n - 1;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 != 0) 
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
}

void ChanDauLeCuoi(int a[], int n)
{
	ChanVeDau(a, n);
	LeVeCuoi(a, n);
}

void Xuat(int a[], int n)
{
	for (int i = 0;i < n;i++)
		cout << setw(5) << a[i];
}