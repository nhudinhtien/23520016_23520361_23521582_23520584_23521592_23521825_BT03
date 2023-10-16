#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int, int, int);

int main()
{
	int b[100];
	int x, y, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;

	Nhap(b, n);
	LietKe(b, n, x, y);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
			if (a[i] % 2 == 0)
				cout << a[i];
}