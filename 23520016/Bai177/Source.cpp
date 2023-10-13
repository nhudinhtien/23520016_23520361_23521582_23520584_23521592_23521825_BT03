#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int &n);
int ktCon(int[], int, int, int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	int vt = 0;
	int l = 0;
	Nhap(a, n);
	cout << ktCon(a, n, vt, l);
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}

void LietKe(int a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
			{
				for (int i = 0; i < l; i++)
					cout << setw(8) << a[vt + i];
				cout << "\n";
			}
		}
	}
}