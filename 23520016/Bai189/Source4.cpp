#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void InterchangeSort4(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	InterchangeSort4(a, n);
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

void InterchangeSort4(int a[], int n)
{
	int dem = 0;
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = i - 1; j >= 0; j--)
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