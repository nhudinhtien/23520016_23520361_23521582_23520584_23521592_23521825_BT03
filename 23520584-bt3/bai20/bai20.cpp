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

void XuatMang(int a[], int n)
{
	if (n == 1)
	{
		return;
	}
	if (a[0] < a[1])
		cout << "cuc tieu:" << a[0] << "  ";
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << "cuc tieu:" << a[i] << "  ";
	if (a[n - 1] < a[n - 2])
		cout <<"cuc tieu:" << a[n - 1] << "  ";
}

int main()
{
	int n, a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	XuatMang(a, n);
	cout << endl;
}