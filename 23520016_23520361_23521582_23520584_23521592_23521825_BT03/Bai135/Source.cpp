#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void XayDung(float[], int, float[], int&);

int main()
{
	float a[100];
	float b[100];
	int n;
	int k;
	Nhap(a, n);
	XayDung(a, n, b, k);
	return 0;
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

void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
		return;
	}
	k = n;
	b[0] = a[1];
	cout << b[0] << setw(5);
	for (int i = 1;i < n - 1;i++)
	{ 
		b[i] = a[i - 1] + a[i + 1];
		cout << b[i] << setw(5);
	}
	b[k - 1] = a[n - 2];
	cout << b[n - 1];
}