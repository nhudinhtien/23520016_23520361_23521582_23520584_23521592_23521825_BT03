#include <iostream>

using namespace std;

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	int i=0;
	for ( i; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);

	return 0;

}