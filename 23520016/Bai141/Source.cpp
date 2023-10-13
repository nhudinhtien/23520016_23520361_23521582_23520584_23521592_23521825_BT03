#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktHoanThien(int);
void HoanThienGiam(int[], int);
void HoanVi(int&, int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	HoanThienGiam(a, n);
	Xuat(a, n);
	return 0;
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

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1;i < k;i++)
		if (k%i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

void HoanThienGiam(int a[], int n)
{
	for (int i = 0;i <= n - 2;i++)
		for (int j = i + 1; j < n - 1;j++)
			if (ktHoanThien(a[i]) && ktHoanThien(a[j]) && a[i] < a[j])
				HoanVi(a[i], a[j]);
}

void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Xuat(int a[], int n)
{
	for (int i=0;i<n;i++)
		cout << setw(8) << a[i];
}