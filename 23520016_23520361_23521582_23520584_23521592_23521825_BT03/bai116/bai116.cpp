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
void GanNhat(int a[], int n, int& x, int& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x = a[i];
				y = a[j];
			}
}
void LietKe(int a[], int n)
{
	int x, y;
	GanNhat(a, n, x, y);
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (i != j && abs(a[i] - a[j]) == abs(x - y))
				cout << "(" << a[i] << ", " << a[j] << ")";
}
int main()
{
	int n, a[MAX];
	int x, y;
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	GanNhat(a, n, x, y);
	LietKe(a, n);
	Xuat(a, n);
	cout << endl;
	return 0;
}