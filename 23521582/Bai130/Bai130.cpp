#include <iostream>
using namespace std;

void NhapA(int[], int&);
void NhapB(int[], int&);
int ktra(int[], int, int[], int);

int main()
{
	int a[100];
	int n;
	NhapA(a, n);

	int b[100];
	int m;
	NhapB(b, m);

	cout<<ktra(a, n, b, m);
	return 0;
}

void NhapA(int a[], int& n)
{
	cout << "Nhap so phan tu mang a: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void NhapB(int b[], int& m)
{
	cout << "Nhap so phan tu mang b: ";
	cin >> m;
	for (int j = 0; j < m; j++)
	{
		cout << "b[" << j << "]: ";
		cin >> b[j];
	}
}
int ktra(int a[], int n, int b[], int m)
{	
	int flag = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i] == a[j])
				flag = 1;
	return flag;
}