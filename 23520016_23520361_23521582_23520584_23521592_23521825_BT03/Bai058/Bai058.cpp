#include<iostream>
using namespace std;

void Nhap(float[], int&);
float Max(float[], int);
int Dem(float[], int);

int main()
{
	float b[100];
	int n;

	Nhap(b, n);
	cout << "So luong gia tri lon nhat cua mang la: " << Dem(b, n);
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
	float max = a[0];
	for (int i = 0; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}

int Dem(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == Max(a, n))
			dem++;
	return dem;
}