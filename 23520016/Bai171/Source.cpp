#include <iostream>
#include <iomanip>
using namespace std;

void NhapGiam(float a[], int &n);
void Xuat(float a[], int n);

int main()
{
	float a[100];
	int n;
	NhapGiam(a, n);
	Xuat(a, n);
	return 0;
}

void NhapGiam(float a[], int &n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		float x;
		cout << "Nhap a[" << i << "]: ";
		cin >> x;
		int j = i - 1;
		for (;j >= 0 && a[j] < x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}