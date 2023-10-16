#include <iostream>
using namespace std;

void Nhap(float[], int&);
int ChuSoDau(int);
int Tong(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nTong cac gia tri " << Tong(a, n);
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

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

int Tong(float a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1;i++)
		if (ChuSoDau(a[i]) % 2 == 0)
			s += a[i];
	return s;
}