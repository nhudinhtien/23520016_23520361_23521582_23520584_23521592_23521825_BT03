#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
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

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		if (a[i]<abs(a[i + 1]) && (a[i] > a[i - 1]))
			cout << a[i] << setw(2);
}