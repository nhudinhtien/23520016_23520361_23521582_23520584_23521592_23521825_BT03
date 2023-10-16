#include<iostream>
#include<iomanip>
using namespace std;
int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int&, int&);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int  n, M;
	int vtd = 0, vtc = 0;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<"\n""Nhap M : ";
	cin >> M;
	cout <<"\n""Mang con sao cho tong bang M la : ";
	TimCon(a, M, n, vtd, vtc);
	return 0;
}

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		 s = s + a[vt + i];
	return s;
}

void TimCon(int a[], int n, int M, int& vtd, int& vtc)
{
	
	for (int l = 1; l <= n; l++)
		 for (int vt = 0; vt <= n - l; vt++)
		 if (TongCon(a, n, vt, l) == M)
		 {
			 vtd = vt;
		     vtc = vt+l-1;
		     return;
		 }
	vtd = vtc = -1;
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


