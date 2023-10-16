#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[100];
	int n;

	Nhap(b, n);
	LietKe(b, n);
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

float DuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return a[i];
	return 0;
}

float DuongNhoNhat(float a[], int n)
{
	float min = DuongDau(a, n);
	if (min == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < min)
			min = a[i];
	return min;
}

void LietKe(float a[], int n)
{
	if (DuongNhoNhat(a, n) == 0)
	{
		cout << "\nKhong co so duong";
		return;
	}
	for (int i = 0; i < n; i++)
		if (a[i] == DuongNhoNhat(a, n))
			cout << a[i];
}