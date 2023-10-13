#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DuongTang(float[], int);
void AmGiam(float[], int);
void DuongTangAmGiam(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	DuongTangAmGiam(a, n);
	cout << "Sau khi sap la: ";
	Xuat(a, n);
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
		cout << "\n" << setw(8) << setprecision(5) << a[i];
}

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}


void DuongTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void AmGiam(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				 HoanVi(a[i], a[j]);

}
void DuongTangAmGiam(float a[], int n)
{
	DuongTang(a, n);
	AmGiam(a, n);
}
