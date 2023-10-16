#include<iostream>
using namespace std;

void Nhap(int[], int&);
int TimCPDau(int[], int);
bool KTCP(int);

int main()
{
	int b[100];
	int n;
	Nhap(b, n);

	cout << "So chinh phuong trong mang la: " << TimCPDau(b, n);
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
int TimCPDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (KTCP(a[i]))
			return a[i];
	return -1;
}
bool KTCP( int n)
{
	for (int i = 1; pow(i, 2) <= n; i++)
		if (pow(i, 2) == n)
			return true;
	return false;
}
