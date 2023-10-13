#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void InterchangeSort2(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	InterchangeSort2(a, n);
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

void InterchangeSort2(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = n - 1; j >= i + 1; j--)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
				dem = dem + 1;
			}
		}
	}
	cout << dem << endl;
}