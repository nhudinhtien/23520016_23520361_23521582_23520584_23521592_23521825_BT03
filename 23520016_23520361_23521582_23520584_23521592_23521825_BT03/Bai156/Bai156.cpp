#include<iostream>
#include<iomanip>
using namespace std;
void DaoMang(float[], int);
void DaoDuong(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int  n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout << endl << "Sau sap xep : " << endl;
	DaoDuong(a, n);
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
	return 0;
}

void DaoMang(float a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		 float temp = a[d];
		 a[d] = a[c];
		 a[c] = temp;
		 d++;
		 c--;
	}
}

void DaoDuong(float a[], int n)
{
	float b[100];
	int k;
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		 if (a[i] > 0)
		    a[i] = b[k++];
}


void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang : ";
	cin >> n;
	cout << "Mang ban dau : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}
