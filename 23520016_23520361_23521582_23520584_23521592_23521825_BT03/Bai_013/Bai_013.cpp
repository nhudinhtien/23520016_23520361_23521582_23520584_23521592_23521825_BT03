#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyento(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (ktNguyento(n))
		cout << "\nLa nguyen to";
	else
		cout << "\nKhong la nguyen to";
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
	for (int i = 0;i < n;i++)
		cout << setw(8) << "\n" << a[i];
}
bool ktNguyento(int k)
{
	int i = 1, dem = 0;
	for (i;i <= k;i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
