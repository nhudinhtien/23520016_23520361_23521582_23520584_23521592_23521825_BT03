#include<iostream>
#include<iomanip>
using namespace std;
bool ktNguyenTo(int);
int DemGiaTri(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<endl<< "So luong so nguyen to phan biet trong mang la : " << DemGiaTri(a, n);
	return 0;
}

bool ktNguyenTo(int k)
{
	 int dem = 0;
	
	 for (int i = 1; i <= k; i++)
		if (k % i == 0)
		  dem++;
	 if (dem == 2)
		 return true;
	 return false;
}

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
			   flag = 0;
		if (ktNguyenTo(a[i]) && flag == 1)
			dem++;
	}
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

