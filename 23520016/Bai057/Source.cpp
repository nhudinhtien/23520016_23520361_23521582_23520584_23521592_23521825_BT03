#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuan(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\n" << TuongQuan(a, n);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1;i++)
		if (a[i] % 2 == 0)
			dem += 1;
	return dem;
}

int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1;i++)
		if (a[i] % 2 != 0)
			dem += 1;
	return dem;
}

int TuongQuan(int a[], int n)
{
	if (DemChan(a, n) > DemLe(a, n))
		return -1;
	if (DemChan(a, n) < DemLe(a, n))
		return 1;
	return 0;
}