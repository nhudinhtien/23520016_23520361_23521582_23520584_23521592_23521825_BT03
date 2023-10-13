#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int[], int&);
int ktCon(int[], int, int[], int);

int main()
{
	int a[100];
	int b[100];
	int n = 0;
	int m = 0;
	Nhap(a, n, b, m);
	cout << ktCon(a, n, b, m);
	return 0;
}

void Nhap(int a[], int &n, int b[], int& m)
{
	cout << "Nhap so luong phan tu mang a: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap so luong phan tu mang b: ";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap b[" << i << "]: ";
		cin >> b[i];
	}
}

int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int flag = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}