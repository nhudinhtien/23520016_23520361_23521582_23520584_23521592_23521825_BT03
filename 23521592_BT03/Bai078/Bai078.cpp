#include<iostream>
#include<iomanip>
using namespace std;
float TimX(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<endl<< "Doan [-x,x] chua tat ca cac gia tri trong mang la " << TimX(a, n);
	return 0;
}

float TimX(float a[], int n)
{
	float lc = abs(a[0]);
	for (int i = 0; i < n; i++)
		if (abs(a[i]) > lc)
			lc = abs(a[i]);
	return lc;
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

