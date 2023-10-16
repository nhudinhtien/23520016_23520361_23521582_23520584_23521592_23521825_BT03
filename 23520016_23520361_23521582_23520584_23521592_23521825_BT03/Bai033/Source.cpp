#include <iostream>
using namespace std;

void Nhap(float[], int&);
int Tong(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nTong cac phan tu: " << Tong(a, n);
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

int Tong(float a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1;i++)
		s = s + a[i];
	return s;
}