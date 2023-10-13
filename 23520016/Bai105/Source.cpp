#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktToanLe(int);
int ToanLeDauTien(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\n" << TimGiaTri(a, n);
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

bool ktToanLe(int n)
{
	int t = n;
	while (t != 0)
	{
		if (t & 2 == 0)
			return false;
		t /= 10;
	}
	return true;
}

int ToanLeDauTien(int a[], int n)
{
	for (int i = 0;i < n;i++)
		if (ktToanLe(a[i]) != 0)
			return a[i];
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = ToanLeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n;i++)
		if (ktToanLe(a[i]) == 1 && a[i] > lc)
			lc = a[i];
	return lc;
}