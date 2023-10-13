#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void Nhap(string, int[], int&);
void Xuat(int[], int);

int main()
{
	int n;
	int a[100];
	string filename = "data.txt";
	Nhap(filename, a, n);
	Xuat(a, n);
}

void Nhap(string filename, int a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1;i++)
		fi >> a[i];
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}