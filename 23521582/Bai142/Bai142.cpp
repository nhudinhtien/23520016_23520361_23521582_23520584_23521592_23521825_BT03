#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void HoanVi(float& , float& );
void DuongTang(float[], int);
void Xuat(float[], int);

int main()
{
	float b[100];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau la: ";
	Xuat(b, n);
	DuongTang(b, n);
	cout << "\nMang sau khi sap xep: ";
	Xuat(b, n);
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
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void DuongTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);

}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(2);
	}
}

void BienDoi(float a[], int n)
{
	float max = Max(a, n);
	float min = Min(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] = max)
			a[i] = min;
		else
			if (a[i] = min)
				a[i] = max;
	}
}