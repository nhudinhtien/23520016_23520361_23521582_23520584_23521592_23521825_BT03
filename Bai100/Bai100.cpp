#include<iostream>
using namespace std;

void Nhap(float[], int&);
float AmDau(float[], int);
float AmMax(float[], int);

int main()
{
	float b[100];
	int n;
	Nhap(b, n);

	cout << "So am lon nhat cua mang la: " << AmMax(b, n);
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
float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}
float AmMax(float a[], int n)
{
	float max = AmDau(a, n);
	if (max == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] > max && a[i] < 0)
			max = a[i];
	return max;
}
