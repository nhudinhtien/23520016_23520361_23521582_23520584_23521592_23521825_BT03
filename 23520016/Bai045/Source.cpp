#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TongDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhCong(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nTrung binh cong cac gia tri duong: " << TrungBinhCong(a, n);
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

float TongDuong(float a[], int n)
{
	float s = 0;
	for (int i = 0;i <= n - 1;i++)
		if (a[i] > 0)
			s += a[i];
	return s;
}

int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1;i++)
		if (a[i] > 0)
			dem += 1;
	return dem;
}

float TrungBinhCong(float a[], int n)
{
	return TongDuong(a, n) / DemDuong(a, n);
}