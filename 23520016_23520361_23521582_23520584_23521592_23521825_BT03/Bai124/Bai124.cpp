#include<iostream>
using namespace std;

void Nhap(int[], int&);
bool Ktra(int[], int);

int main()
{
	int b[100];
	int n;
	Nhap(b,n);

	if (Ktra(b, n))
		cout << "Mang co tinh chan le.";
	else
		cout << "Mang khong co tinh chan le: ";

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";;
		cin >> a[i];
	}
}
bool Ktra(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if ((a[i] + a[i + 1]) % 2 != 0)
			return true;
	return false;
}