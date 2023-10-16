#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ThemViTri(float[], int&, float, int);

int main()
{
	float a[100],x;
	int n, k;
	cout << "Nhap x va k: ";
	cin >> x >> k;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	ThemViTri(a, n, x, k);
	cout << "Sau khi them: ";
	Xuat(a, n);
	return 0;

}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0;i < n;i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "\n" << setw(8) << a[i];
}

void ThemViTri(float a[], int& n,float x, int k)
{
	for (int i = n; i >= k + 1; i--)
			a[i] = a[i - 1];
	a[k] = x;
	n++;
}