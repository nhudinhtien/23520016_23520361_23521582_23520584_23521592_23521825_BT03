#include<iostream>
using namespace std;

void Nhap(int[], int&);
int DemGiaTri(int[], int);

int main()
{
	int b[100];
	int n;

	Nhap(b, n);
	cout << "So luong gia tri co chu so tan cung la 5 la: " << DemGiaTri(b, n);
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

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i]) % 10 == 5)
			dem++;
	return dem;
}