#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int ViTriDau(float[], int);
int TimViTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\n" << TimViTri(a, n);
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int ViTriDau(float a[], int n)
{
	for (int i = 0; i<n;i++)
		if (a[i] > 0)
			return i;
	return -1;
}

int TimViTri(float a[], int n)
{
	int lc = ViTriDau(a, n);
	if (lc == 1)
		return -1;
	for (int i = 0;i < n;i++)
		if (a[i] > 0 && a[i] < a[lc])
			lc = i;
	return lc;
}