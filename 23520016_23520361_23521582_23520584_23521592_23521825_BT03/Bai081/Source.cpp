#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float DauTien(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\n" << DauTien(a, n);
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

float DauTien(float a[], int n)
{
	for (int i = 0; i < n;i++)
		if (a[i] > 2003)
		{
			float lc = a[i];
			return lc;
		}
	return 0;
}