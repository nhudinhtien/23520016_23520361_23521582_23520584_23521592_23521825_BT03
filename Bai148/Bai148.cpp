#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
float Max(float[], int);
float Min(float[], int);
void BienDoi(float[], int);
void Xuat(float[], int);


int main()
{
	float b[100];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau la: ";
	Xuat(b, n);
	BienDoi(b, n);
	cout << "\nMax: " << Max(b, n);
	cout << "\nMin: " << Min(b, n);
	cout << "\nMang sau khi bien doi: ";
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
float Max(float a[], int n)
{
	float ln = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > ln)
			ln = a[i];
	return ln;
}
float Min(float a[], int n)
{
	float nn = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < nn)		
			nn = a[i];
	return nn;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(2);
	}
}

void BienDoi(float a[], int n)
{
	float ln = Max(a, n);
	float nn = Min(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] = ln)
			a[i] = nn;
		else
			if (a[i] = nn)
				a[i] = ln;	
	}
}