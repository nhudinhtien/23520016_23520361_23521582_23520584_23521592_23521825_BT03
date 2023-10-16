#include<iostream>
#include<iomanip>
using namespace std;
void HoanVi(int& , int& );
void ChanTang(int[], int);
void LeTang(int[], int);
void ChanTangLeTang(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int  n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout << "\n" "Mang sap theo thu tu : " << endl;
	ChanTangLeTang(a, n);
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
	return 0;
}

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}


void ChanTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
		    if (a[i] % 2 && a[j] % 2 && a[i] > a[j])
		       HoanVi(a[i], a[j]);
}

void LeTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
	   for (int j = i + 1; j <= n - 1; j++)
		   if (a[i] % 2 && a[j] % 2 && a[i] > a[j])
		      HoanVi(a[i], a[j]);
}

void ChanTangLeTang(int a[], int n)
{
	ChanTang(a, n);
	LeTang(a, n);
}

void Nhap(int a[], int& n)
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

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}


