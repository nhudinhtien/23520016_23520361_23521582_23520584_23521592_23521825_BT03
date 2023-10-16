#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "Cac cap thoa man la: ";
	LietKe(a, n);

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
		cout <<"\n" << setw(8) << a[i];
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	for (int j = 0; j <= n - 1; j++)
	if (i != j && a[i] <= a[j])
	cout << "\n("<<a[i]<<", "<<a[j]<<")";
}