#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int b[100];
	int n, m;
	cout << "Nhap so phan tu mang a:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap so phan tu mang b:";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cout << "b[" << i << "]: ";
		cin >> b[i];
	}
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}