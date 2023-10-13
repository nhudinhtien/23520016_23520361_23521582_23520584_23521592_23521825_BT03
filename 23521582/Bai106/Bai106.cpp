#include<iostream>
using namespace std;

void Nhap(int[], int& n);
bool ktra(int);
int DauTien(int[], int);
int Tim(int[], int);


int main()
{
	int b[100];
	int n;
	Nhap(b, n);
	cout << "Ket qua la: " << Tim(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
bool ktra(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
		t /= 5;
	}
	return flag;
}
int DauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktra(a[i]) != 0)
			return a[i];
	return 0;
}
int Tim(int a[], int n)
{
	int max = DauTien(a, n);
	if (max == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktra(a[i]) == 1 && a[i] > max)
			max = a[i];
	return max;
}