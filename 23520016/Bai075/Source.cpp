#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float&);
float XaNhat(float[], int, float);

int main()
{
	float a[100];
	float x;
	int n;
	Nhap(a, n, x);
	cout << "\nGia tri xa " << x << " nhat la: " << XaNhat(a, n, x);
}

void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float XaNhat(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 0; i < n;i++)
		if (abs(a[i] - x) > abs(lc - x))
			lc = a[i];
	return lc;
}