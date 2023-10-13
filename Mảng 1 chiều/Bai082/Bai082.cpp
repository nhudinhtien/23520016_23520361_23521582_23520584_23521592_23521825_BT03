#include<iostream>
using namespace std;

void Nhap(int[], int&);
int DauTien(int[], int);

int main()
{
	int b[100];
	int n;
	Nhap(b, n);

	cout << "So chan dau tien cua mang: " << DauTien(b, n);
	return 0;
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
int DauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}