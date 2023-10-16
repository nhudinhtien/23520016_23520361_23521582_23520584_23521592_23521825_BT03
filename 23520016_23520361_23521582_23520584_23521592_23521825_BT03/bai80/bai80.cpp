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
float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
		return a[i];
	return 0;
	}

int main()
{
	int n;
	float a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	cout << "vi tri gia tri am dau tien:" << AmDau(a, n);
	Xuat(a, n);
	cout << endl;
	return 0;
}