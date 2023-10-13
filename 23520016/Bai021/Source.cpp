#include <iostream>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 2;i++)
		if (a[i] > abs(a[i + 1]))
			cout << a[i] << " ";
}