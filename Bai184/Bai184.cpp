#include<iostream>
using namespace std;

void NhapA(int[], int&);
void NhapB(int[], int&);
int DemCon(int[], int, int[], int);

int main()
{
	int a[100];
	int n;
	NhapA(a, n);

	int b[100];
	int m;
	NhapB(b, n);
	cout << "kq la: " << DemCon(a, n, b, m);
	
	return 0;
}
void NhapA(int a[], int& n)
{
	cout << "Nhap so phan tu mang a:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void NhapB(int b[], int& m)
{
	cout << "Nhap so phan tu mang b:";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << "b[" << i << "]: ";
		cin >> b[i];
	}
}
int DemCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}