#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
float TongDuong(float[], int);

int main()
{
	float b[100];
	int n;

	Nhap(b, n);
	cout << "Tong cac so duong cua mang la: " << TongDuong(b, n);
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

float TongDuong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			s += a[i];
	return s;
}