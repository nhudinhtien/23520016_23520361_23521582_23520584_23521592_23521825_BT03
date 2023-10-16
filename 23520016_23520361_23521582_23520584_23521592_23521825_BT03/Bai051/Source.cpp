#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DemGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo gia tri duong chia het cho 7: " << DemGiaTri(a, n);
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

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1;i++)
		if (a[i] > 0 && a[i] % 7 == 0)
				dem += 1;
	return dem;
}