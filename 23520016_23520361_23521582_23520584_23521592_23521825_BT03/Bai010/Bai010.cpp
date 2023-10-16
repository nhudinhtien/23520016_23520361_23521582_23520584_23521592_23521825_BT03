#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void Nhap(int[], int&);
bool KTToanLe(int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	
	Nhap(b, k);
	LietKe(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

bool KTToanLe(int n)
{
	int flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t /= 10;

	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (KTToanLe(a[i]) == true)
			cout << a[i] << setw(2);
}
