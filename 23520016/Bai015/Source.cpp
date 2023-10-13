#include <iostream>
using namespace std;

void Nhap(float[], int&, int&, int&);
void LietKe(float[], int, int, int);

int main()
{
	float a[100];
	int n, x, y;
	Nhap(a, n, x, y);
	LietKe(a, n, x, y);
}

void Nhap(float a[], int& n, int& x, int& y)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap [x, y]: ";
	cin >> x >> y;
}

void LietKe(float a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1;i++)
		if (a[i] >= x && a[i] <= y)
			cout << a[i] << " ";
}