#include<iostream>
#include<iomanip>
using namespace std;
void MotVeDau(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int  n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout << endl << "Sau sap xep : " << endl;
	MotVeDau(a, n);
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
	return 0;
}

void MotVeDau(float a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 1)
		{
			float temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang : ";
	cin >> n;
	cout << "Mang ban dau : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}
