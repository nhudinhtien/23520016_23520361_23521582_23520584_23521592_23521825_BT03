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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void DuaVeCuoi(int a[], int n)
{
	int vt = n - 1;
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyenTo(a[i]))
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
}
int main()
{
	int n, a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	DuaVeCuoi(a, n);
	Xuat(a, n);
	cout << endl;
	return 0;
}