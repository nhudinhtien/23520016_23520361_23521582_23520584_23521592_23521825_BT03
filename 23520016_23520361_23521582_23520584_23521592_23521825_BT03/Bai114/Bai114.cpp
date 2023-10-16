#include<iostream>
#include<iomanip>
using namespace std;
int ViTriDuongDau(int[], int);
int ViTriDuongNhoNhat(int[], int);
int TimChuSo(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<endl<< "Chu so xuat hien it nhat trong mang la : " << TimChuSo(a, n);
	return 0;
}

int ViTriDuongDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
		   return i;
	 return -1;
}

int ViTriDuongNhoNhat(int a[], int n)
{
	int lc = ViTriDuongDau(a, n);
	if (lc == -1)
		 return -1;
	for (int i = 0; i <= n - 1; i++)
		 if (a[i] > 0 && a[i] < a[lc])
		     lc = i;
	 return lc;
}

int TimChuSo(int a[], int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			    dem[dv]++;
			t = t / 10;
		}
	}
	return ViTriDuongNhoNhat(dem, 10);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang : ";
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

