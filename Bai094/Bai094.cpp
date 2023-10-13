#include<iostream>
using namespace std;

void Nhap(int[], int&);
bool ktNT(int);
int Tim(int[], int);

int main()
{
	int b[100];
	int n;
	Nhap(b, n);

	cout << "So nguyen to cuoi cung cua mang la: " << Tim(b, n);
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
bool ktNT(int n)
{
	int dem = 0;	
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int Tim(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktNT(a[i]))
			return a[i];
	return 0;
}