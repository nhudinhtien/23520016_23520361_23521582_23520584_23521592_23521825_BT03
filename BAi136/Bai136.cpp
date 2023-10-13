#include<iostream>
using namespace std;

void Nhap(int[], int&);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int b[100];
	int m;
	XayDung(a, n, b, m);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void XayDung(int a[], int n, int b[], int& m)
{
	m = 0;
	b[m++] = a[0];
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] % 2 == 0 && b[m - 1] % 2 == 0)
			b[m++] = 1;
		else
			if (a[i] % 2 != 0 && b[m - 1] % 2 != 0)
				b[m++] = 0;
		b[m++] = a[i];
	}
}