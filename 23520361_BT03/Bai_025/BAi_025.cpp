#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a,n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nCac gia tri le la: ";
	LietKe(a, n);

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
		cout << setw(8) << "\n"<<a[i];
}

void LietKe(int a[], int n)
{
	for (int i = 0;i <= n - 1;i++)
		if (a[i] % 2 != 0)
			cout << setw(8) <<"\n" << a[i];
}