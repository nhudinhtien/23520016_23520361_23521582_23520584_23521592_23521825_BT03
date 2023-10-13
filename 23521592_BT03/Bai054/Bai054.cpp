#include<iostream>
#include<iomanip>
using namespace std;
bool ktDoiXung(int);
int DemDoiXung(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout<<endl << "So gia tri doi xung trong mang la : " << DemDoiXung(a, n);
	return 0;
}

bool ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	int dv;
	while (t != 0)
		{
		dv = t % 10;
		dn = dn * 10 + dv;
		t /= 10;
	}
	if (dn == n)
		return true;
	return false;
}

int DemDoiXung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]))
		    dem++;
	return dem;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang : ";
	cin >> n;
	cout << "Mang ban dau : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}

