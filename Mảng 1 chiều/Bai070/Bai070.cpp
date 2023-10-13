#include<iostream>
#include<iomanip>
using namespace std;

void NhapA(int[], int&);
void NhapB(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int a[100];
	int b[100];
	int n, m;
	NhapA(a, n);
	cout << endl;
	NhapB(b, m);
	cout << "\nCac gia tri chi xuat hien o 1 trong 2 mang la: ";
	LietKe(a, n, b, m);

	return 0;
}

void NhapA(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
		
}

void NhapB(int a[], int& n)
{
	cout << "Nhap m: ";
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

void LietKe(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << a[i] << setw(2);
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << b[i] << setw(2);
	}
}