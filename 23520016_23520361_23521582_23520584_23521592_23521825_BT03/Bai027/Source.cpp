#include <iostream>
using namespace std;

void Nhap(float[], int&);
float AmDau(float[], int);
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

float AmDau(float a[], int n)
{
	for (int i = 0;i <= n - 1;i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

void LietKe(float a[], int n)
{
	float ad = AmDau(a, n);
	if (ad == 0)
	{
		cout << "\nKhong co gia tri am";
		return;
	}
	for (int i = 0; i <= n - 1;i++)
		if (a[i] == ad)
			cout << i << " ";
}