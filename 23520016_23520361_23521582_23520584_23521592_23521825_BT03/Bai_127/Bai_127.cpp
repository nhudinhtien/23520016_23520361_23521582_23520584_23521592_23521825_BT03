#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCSC(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	if (ktCSC(a, n) == 1)
		cout << "\nLa dang CSC";
	else
		cout << "\nKhong co dang CSC";
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

int ktCSC(int a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
			flag = 0;
	return flag;

}