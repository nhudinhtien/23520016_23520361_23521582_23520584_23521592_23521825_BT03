#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int[], int&);
void Tron(int[], int, int[], int, int[], int&);
void HoanVi(int &, int &);
void Xuat(int[], int);

int main()
{
	int a[100];
	int b[100];
	int c[200];
	int n, m, p;
	Nhap(a, n, b, m);
	Tron(a, n, b, m, c, p);
	Xuat(c, p);
	return 0;
}

void Nhap(int a[], int& n, int b[], int& m)
{
	cout << "Nhap so phan tu cua mang a: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap so phan tu cua mang b: ";
	cin >> m;
	for (int i = 0;i <= m - 1;i++)
	{
		cout << "Nhap b[" << i << "]: ";
		cin >> b[i];
	}
}

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j<m && a[i]>b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
	for (int i = 0; i < p - 1; i++)
		for (int j = i + 1; j < p; j++)
			if (c[i] < c[j])
				HoanVi(c[i], c[j]);
}

void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Xuat(int c[], int p)
{
	for (int i = 0;i < p;i++)
		cout << setw(8) << c[i];
}