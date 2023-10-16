#include<iostream>
#include<iomanip>
using namespace std;
bool ktHoanThien(int);
int HoanThienDau(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout <<endl<< "So hoan thien dau tien trong mang la : " << HoanThienDau(a, n);
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
		if (ktHoanThien(a[i]))
		   return a[i];
	return -1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
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

