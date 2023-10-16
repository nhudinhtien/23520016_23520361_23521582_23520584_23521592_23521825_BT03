#include<iostream>
#include<time.h>
#include <iomanip>
#define MAX 100
using namespace std;
void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
			a[i] = rand() % 100 - rand() % 100;
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
	return;
}
int ViTriAmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return -1;
	return -1;
}
int TimViTri(float a[], int n)
{
	int lc = ViTriAmDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i]<0 && a[i]>a[lc])
			lc = i;
	return lc;
}
int main()
{
	int n;
	float a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	Xuat(a, n);
	cout << "vi tri gia tri am nho nhat : " << TimViTri(a, n);
	cout << endl;
	return 0;
}