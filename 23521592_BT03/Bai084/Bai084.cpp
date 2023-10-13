#include<iostream>
#include<iomanip>
using namespace std;
int TimViTri(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<endl<< "Vi tri thoa hai dieu kien la : " << TimViTri(a, n);
	return 0;
}

int TimViTri(float a[], int n)
{
	for (int i = 1; i <= n - 2; i++)
		if (a[i] == (a[i - 1] * a[i + 1]))
			return i;
	return -1;
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


