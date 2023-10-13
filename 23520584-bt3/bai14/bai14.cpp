#include<time.h>
#include <iostream>
#include<math.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i << ": ";
		cin >> a[i];
	}
}

bool Vitrisochinhphuong(int x)
{
	int n;
	n = ((int)sqrt((float)(x)));
	if (n * n == x)
		return true;
	return false;
}

void XuatMang(int a[], int n)
{
	cout << "so chinh phuong la : \n";
	for (int i = 0; i < n; i++)
		if (Vitrisochinhphuong(a[i]) == true)
			cout << a[i] << "\t";
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (Vitrisochinhphuong(a[i]))
			cout << "Vi tri so chinh phuong: \n" << i<<" ";
		else
			cout << "Khong co so chinh phuong";
}

int main()
{
	int n, a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	LietKe(a,n);
	cout << endl;
}