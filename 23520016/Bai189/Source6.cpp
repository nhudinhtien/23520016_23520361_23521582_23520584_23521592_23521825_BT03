#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void InterchangeSort6(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	InterchangeSort6(a, n);
	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void InterchangeSort6(int a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	InterchangeSort6(a, n - 1);
	cout << dem << endl;
}