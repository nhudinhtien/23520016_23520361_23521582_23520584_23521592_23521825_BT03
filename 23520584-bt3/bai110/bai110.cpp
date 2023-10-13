#include<iostream>
#include<time.h>
#include <iomanip>
#define MAX 100
using namespace std;
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
			a[i] = rand() % 100 - rand() % 100;
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
int LonNhat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
int TimGiaTri(int a[], int n)
{
	int lc = LonNhat(a, n) + 1;
	while (ktNguyenTo(lc) == 0)
		lc++;
	return lc;
}
int main()
{
	int n, a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	cout << TimGiaTri(a, n);
	Xuat(a, n);
	cout << endl;
	return 0;
}