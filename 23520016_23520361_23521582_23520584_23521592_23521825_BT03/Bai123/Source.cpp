#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktDoiXung(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\n" << ktDoiXung(a, n);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		if (a[d] != a[c])
			flag = 0;
		d++;
		c--;
	}
	return flag;
}