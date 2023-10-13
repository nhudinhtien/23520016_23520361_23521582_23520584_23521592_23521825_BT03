#include<iostream>
#include<time.h>
#include <iomanip>
#define MAX 1000
using namespace std;
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
	return;
}
void LietKe(int a[], int n)
{
	for (int l = 3; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			for (int i = 0; i < l; i++)
				cout << setw(8) << a[vt + i];
			cout << "\n";
		}
	}
}
int main()
{
	int n, a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	LietKe(a, n);
	Xuat(a, n);
	cout << endl;
	return 0;
}