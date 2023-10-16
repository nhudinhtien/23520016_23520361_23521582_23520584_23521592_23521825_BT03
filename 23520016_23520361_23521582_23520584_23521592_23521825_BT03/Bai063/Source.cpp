#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1;i++)
		if (a[i] == x)
			dem += 1;
	return dem;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1;i++)
	{
		int kq = TanSuat(a, n, a[i]);
		if (kq == 1)
			cout << setw(8) << a[i];
	}
}