#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanCuoi(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	ChanCuoi(a, n);
	cout <<"\nChan cuoi la: " << ChanCuoi(a, n);
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

int ChanCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 == 0)
		{
			
			return a[i];
		}
	return -1;
}