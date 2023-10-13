#include<iostream>
using namespace std;

void Nhap(int[], int&);
int DemPhanBiet(int[], int);

int main()
{
	int b[100];
	int n;

	Nhap(b, n);
	cout << "Cac gia tri phan biet trong mang 1 chieu la: " << DemPhanBiet(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

int DemPhanBiet(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0 ; j < i; j++)
			if (a[j] == a[i])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}