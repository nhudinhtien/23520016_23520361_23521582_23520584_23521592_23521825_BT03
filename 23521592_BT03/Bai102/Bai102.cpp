#include<iostream>
#include<iomanip>
using namespace std;
bool ktHoanThien(int);
int HoanThienDau(int[], int);
int TimGiaTri(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout << endl<< "Hoan thien nho nhat trong mang la : " << TimGiaTri(a, n);
	return 0;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int HoanThienDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	    if (ktHoanThien(a[i]) == 1)
		    return a[i];
	 return -1;
}

int TimGiaTri(int a[], int n)
{
	int lc = HoanThienDau(a, n);
	    if (lc == -1)
		   return -1;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) == 1 && a[i] < lc)
		    lc = a[i];
	return lc;
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

