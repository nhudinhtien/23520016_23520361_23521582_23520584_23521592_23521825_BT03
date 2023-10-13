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
int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}
int TimGiaTri(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) & 1)
			return a[i];
	return 0;
}
int main()
{
	int n, a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	Xuat(a, n);
	cout << "gia tri dau tien co chu so dau tien la so le:" << TimGiaTri(a, n);
	cout << endl;
	return 0;
}