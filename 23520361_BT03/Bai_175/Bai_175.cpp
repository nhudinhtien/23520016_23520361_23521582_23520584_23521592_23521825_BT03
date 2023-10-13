#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nCac mang con la: ";
	XuatCon(a, n);

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

void XuatCon(int a[], int n)
{
	for (int l = 1;l <= n;l++)
	{
		for (int vt = 0;vt <= n - l;vt++)
		{
			for (int i = 0;i < l;i++)
			{
		
				cout << setw(8) << a[vt + i];

			}
			cout << endl;
		}
	}
}