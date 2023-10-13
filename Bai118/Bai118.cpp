#include<iostream>
using namespace std;

void Nhap(int[], int&);
bool Ktra(int[], int);
void Xuat(int[], int);

int main()
{
	int b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);
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
bool Ktra(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i + 1] - a[i] > 1)
			return true;
	return false;
}
void Xuat(int a[], int n)
{
	if (Ktra(a, n))
		cout << "Trong mang co ton tai 2 khong so lien tiep";
	else
		cout << "Trong mang khong ton tai 2 so khong lien tiep";
}
