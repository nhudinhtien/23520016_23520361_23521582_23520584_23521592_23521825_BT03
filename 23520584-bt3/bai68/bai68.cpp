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
void Xuat(int a[], int n, int x)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
	return;
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (flag == 1)
		{
			int dem = TanSuat(a, n, a[i]);
			cout << "\nGia tri :" << a[i];
			cout << "(" << dem << ")";
		}
	}
}
int main()
{
	int n, a[MAX];
	int x{};
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	LietKe(a, n);
	cout << "tan so xuat hien:" << TanSuat(a, n,x);
	Xuat(a, n,x);
	cout << endl;
	return 0;
}