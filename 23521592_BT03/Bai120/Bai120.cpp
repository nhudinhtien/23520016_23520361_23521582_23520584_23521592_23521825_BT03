#include<iostream>
#include<iomanip>
using namespace std;
bool ktNguyenTo(int);
int ktTonTai(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout<< endl << ktTonTai(a, n);
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

int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]) == true)
		    flag = 1;
	return flag;
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

