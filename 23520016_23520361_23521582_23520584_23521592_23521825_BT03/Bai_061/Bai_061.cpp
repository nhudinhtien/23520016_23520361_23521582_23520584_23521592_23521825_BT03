#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemGiaTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	
	DemGiaTri(a, n);
	return 0;

}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0;i < n;i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "\n" << setw(8) <<setprecision(5)<< a[i];
}

int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
		if ((a[i] * a[i - 1] > 0) && abs(a[i]) > abs(a[i - 1]));
			dem++;
	cout << "\nSo luong cac phan tu la :" << dem;

	return dem;

}