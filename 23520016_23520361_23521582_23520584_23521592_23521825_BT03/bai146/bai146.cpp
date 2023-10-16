#include<iostream>
#include<time.h>
#include <iomanip>
#define MAX 1000
using namespace std;
void NhapMangA(int a[], int m)
{
	for (int i = 0; i < m; i++) {
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
void Tron(int a[], int n, int b[], int m, int c[], int p)
{
	int i = 0;
	int j = 1;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] < b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}
int main()
{
	int a[MAX], b[MAX], c[MAX];
	int m, n, p;
	cout << "So luong phan tu mang a: "; cin >> m;
	NhapMangA(a, m);
	cout << "So luong phan tu mang b: "; cin >> n;
	NhapMangB(b, n);
	Tron(a,n,b,m,c,p);
	cout << endl;
	return 0;
}