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
int TimViTri(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < a[lc])
			lc = i;
	return lc;
}
int main()
{
	int n,a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	cout << "vi tri gia tri nho nhat:" << TimViTri(a, n);
	Xuat(a, n);
	cout << endl;
	return 0;
}