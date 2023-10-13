#include<iostream>
#include<iomanip>
using namespace std;
int ViTriDau(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<endl<< "Vi tri gia tri chan dau tien la : " << ViTriDau(a, n);
	return 0;
}

int ViTriDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
		    return i;
	return -1;
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

