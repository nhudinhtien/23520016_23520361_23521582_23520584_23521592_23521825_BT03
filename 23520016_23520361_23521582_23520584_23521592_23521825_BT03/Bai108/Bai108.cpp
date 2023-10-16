#include<iostream>
#include<iomanip>
using namespace std;
int ucln(int, int);
int TimUCLN(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<endl<< "Uoc chung lon nhat cua cac phan tu trong mang la : " << TimUCLN(a, n);
	return 0;
}

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	 {
		if (a > b)
			 a = a - b;
		else
			 b = b - a;
	}
	return (a + b);
}

int TimUCLN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = ucln(lc, a[i]);
	return lc;
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

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}

