#include<iostream>
#include<iomanip>
using namespace std;
void LietKe(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<endl<< "Gia tri trong mang co it nhat moy lan can trai dau la : "<< endl;
	LietKe(a, n);
	return 0;
}


void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] * a[1] < 0)
		cout << a[0]<< endl;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] * a[i + 1] < 0 || a[i] * a[i - 1] < 0)
		cout << a[i] << endl;
	if (a[n - 1] * a[n - 2] < 0)
		cout << a[n - 1] << endl;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
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

