#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int ViTriCuoi(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	ViTriCuoi(a, n);
	cout << "\nGia tri duong nho nhat la: " << ViTriCuoi(a, n);
	return 0;

}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0;i < n;i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "\n" << setw(8) << a[i];
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			 s = s + i;
	if (s == k)
		return true;
	return false;
}

int ViTriCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktHoanThien(a[i]))
			return a[i];
	return -1;
}