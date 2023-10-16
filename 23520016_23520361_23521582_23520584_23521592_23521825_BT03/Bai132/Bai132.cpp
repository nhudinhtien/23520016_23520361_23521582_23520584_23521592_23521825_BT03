#include<iostream>
#include<iomanip>
using namespace std;
void XayDung(int[], int, int[], int&);
void Nhap(int[], int&);

int main()
{
	int a[100], b[100];
	int n,k;
	Nhap(a, n);
	cout << "Mang cac gia tri le : ";
	XayDung(a, n, b, k);
	return 0;
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
		     b[k] = a[i];
		     k++;
		}
	for (int i = 0; i <= k - 1; i++)
		cout << setw(8) << b[i];
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang : ";
	cin >> n;
	cout << "Mang ban dau : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

