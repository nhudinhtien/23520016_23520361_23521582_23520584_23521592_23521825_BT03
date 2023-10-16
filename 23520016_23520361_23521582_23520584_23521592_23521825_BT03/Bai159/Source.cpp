#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void DichPhai(float[], int);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	DichPhai(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void DichPhai(float a[], int n)
{
	float temp = a[n - 1];
	for (int i = n - 1;i >= 1;i--)
		a[i] = a[i - 1];
	a[0] = temp;
}

void Xuat(float a[], int n)
{
	for (int i = 0;i < n;i++)
		cout << setw(5) << a[i];
}