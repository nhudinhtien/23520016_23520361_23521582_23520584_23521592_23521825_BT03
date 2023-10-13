#include<iostream>
#include<iomanip>
using namespace std;

void NhapTang(float[], int&);
void Xuat(float[], int);

int main()
{
	float b[100];
	int n;
	NhapTang(b, n);
	Xuat(b, n);
}

void NhapTang(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
		int x = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;

	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(2);
}