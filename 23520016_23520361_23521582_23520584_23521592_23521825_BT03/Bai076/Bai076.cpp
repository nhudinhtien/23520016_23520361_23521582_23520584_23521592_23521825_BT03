#include<iostream>
using namespace std;

void Nhap(float[], int&);
float Tim(float[], int, float);

int main()
{
	float x;
	cout << "Nhap gia tri thuc x: ";
	cin >> x;

	int n;
	float b[100];
	Nhap(b, n);

	cout << "Vi tri co gia tri gan gia tri x nhat: " << Tim(b, n, x);

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
float Tim(float a[], int n, float x)
{
	int max = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(a[max] - x))
			max = i;
	return max;
}