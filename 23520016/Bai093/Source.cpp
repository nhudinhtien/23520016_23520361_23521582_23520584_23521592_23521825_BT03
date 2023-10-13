#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktDang2m(int);
int TimGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\n" << TimGiaTri(a, n);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i <= n - 1;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktDang2m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
		t /= 2;
	}
	return flag;
}

int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n;i++)
		if (ktDang2m(a[i]))
			return a[i];
	return 0;
}