#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
int Tim(int[], int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int n;
	Nhap(b, n);
	LietKe(b, n);
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
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int Tim(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, max))
			max = a[i];
	return max;
}
void LietKe(int a[], int n)
{
	int max = Tim(a, n);
	int ts = TanSuat(a, n, max);
	for (int i = 0; i <= n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(a, n, a[i]) == ts && flag)
			cout << "cac so xuat hien nhieu nhat la: "<<a[i]<<setw(2);
	}
}