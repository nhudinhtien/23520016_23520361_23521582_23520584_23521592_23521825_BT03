#include<iostream>
#include<iomanip>
using namespace std;
float LonNhat(float[], int);
void LietKe(float[], int);
void Nhap(float[], int &);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a,n);
	cout << "Mang ban dau : " << endl;
	Xuat(a, n);
	cout <<endl<< "Gia tri lon nhat trong mang la : " << LonNhat(a, n) << endl;
	cout << "Bao gom cac vi tri so : " << endl;
	LietKe(a, n);
	return 0;
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc)
	lc = a[i];
	return lc;
}

void LietKe(float a[], int n)
{
	float lc = LonNhat(a, n);
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == lc)
			cout << i << endl;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
	    cout << "Nhap a["<<i<<"]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}

