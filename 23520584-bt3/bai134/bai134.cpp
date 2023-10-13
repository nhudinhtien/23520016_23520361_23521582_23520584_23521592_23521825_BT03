#include<iostream>
#include<time.h>
#include <iomanip>
#define MAX 1000
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
void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i=0;i<n;i++)
		if (ktNguyenTo(a[i]))
		{
			b[k] = a[i];
			k++;
		}
}
int main()
{
	int b[MAX], a[MAX];
	int n, k;
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	XayDung(a, n, b, k);
	Xuat(a, n);
	cout << endl;
	return 0;
}