#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[],int&);
void Xuat(float[], int);
int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "mang ban dau:";
	Xuat(b, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
			a[i] = rand() % 100 - rand() % 100;
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
	return;
}