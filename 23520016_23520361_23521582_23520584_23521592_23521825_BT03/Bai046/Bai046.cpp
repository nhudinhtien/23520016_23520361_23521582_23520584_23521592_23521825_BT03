#include<iostream>
using namespace std;

void Nhap(int[], int&);
bool KiemTraNguyenTo(int);
int DemNguyenTo(int[], int);
int TongNguyenTo(int[], int);
float TBC(int[], int);

int main()
{
	int b[100];
	int n;

	Nhap(b, n);
	cout << "TBC cac so nguyen to cua mang la: " << TBC(b, n);

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

bool KiemTraNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
			if (k % i == 0)
			dem++;
	if (dem == 0)
		return true;
	return false;
}

int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (KiemTraNguyenTo(a[i]))
			dem++;
	return dem;
}

int TongNguyenTo(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (KiemTraNguyenTo(a[i]))
			s = s + a[i];
	return s;
}

float TBC(int a[], int n)
{
	int s = TongNguyenTo(a, n);
	int dem = DemNguyenTo(a, n);
	if (dem == 0)
		return 0;
	return (float)s / dem;
}