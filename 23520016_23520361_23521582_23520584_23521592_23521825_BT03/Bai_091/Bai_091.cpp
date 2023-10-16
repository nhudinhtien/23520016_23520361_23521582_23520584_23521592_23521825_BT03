#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
int DoiXungDau(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	DoiXungDau(a, n);
	cout << "\nGia tri doi xung dau la : " << DoiXungDau(a, n);

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

bool ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t /= 10;
	}
	if (dn == n)
		return true;
	return false;
}

int DoiXungDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDoiXung(a[i]))
			return a[i];
	return 10;
}