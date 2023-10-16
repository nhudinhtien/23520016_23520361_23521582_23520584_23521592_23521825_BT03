#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucDai(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nTong cuc dai la : \n";
	TongCucDai(a, n);

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

float TongCucDai(float a[], int n)
{
	if (n <= 1)
	return 0;
	float s = 0;
	if (a[0] > a[1])
		 s = s + a[0];
	for (int i = 1;i <= n - 2;i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	cout << s;
	return s;
}