#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float CuoiCung(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\n" << CuoiCung(a, n);
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

float CuoiCung(float a[], int n)
{
	for (int i = n - 1; i >= 0;i--)
		if (a[i] < 0 && a[i] > -1)
			return a[i];
	return 0;
}