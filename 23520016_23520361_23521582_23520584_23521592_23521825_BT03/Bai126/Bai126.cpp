#include<iostream>
#include<iomanip>
using namespace std;
int ktGiam(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int  n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout<<endl<<ktGiam(a, n);
	return 0;
}

int ktGiam(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		 if (a[i] < a[i + 1])
		    flag = 0;
	if (flag == 1)
		cout << "Mang giam dan.";
	else
		cout << "Mang khong giam dan.";
	return flag;
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


