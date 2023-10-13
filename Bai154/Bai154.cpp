#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void DaoMang(float[], int);
void Xuat(float[], int);

int main()
{
	float b[100];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau: ";
	Xuat(b, n);
	DaoMang(b, n);
	cout << "\nMang luc sau: ";
	Xuat(b, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
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
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(2);
}