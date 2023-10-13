#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
float Tong(float[], int);

int main()
{
	float b[100];
	int n;

	Nhap(b, n);
	cout << "Tong la: " << Tong(b,n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

float Tong(float a[], int n)
{
	float s = 0;
	if (n == 1)
		s += a[0];
	for (int i = 0; i < n; i++)
	if (a[i] < a[i - 1] && a[i] < a[i + 1])
		s += a[i];
	if (a[n - 1] < a[n - 2])
		s += a[n - 1];
	return s;			
}