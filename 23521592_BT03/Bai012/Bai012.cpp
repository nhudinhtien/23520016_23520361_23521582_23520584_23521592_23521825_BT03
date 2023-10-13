#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

string getInputFileName(int);
string getOutputFileName(int);
void Nhap(int[], int&, string);
void Xuat(int[], int, string);

void Xuat(int[], int);
bool ktDoiXung(int);
void XayDung(int[], int, int[], int&);

int main()
{
	int b[100000];
	int n;
	for (int i = 1; i <= 13; i++)
	{
		string FileName = getInputFileName(i);
		Nhap(b, n, FileName);
		
		cout << "\n" << FileName << endl;
		Xuat(b, n);
		
		int c[100000];
		int l;
		XayDung(b, n, c, l);
		cout << "\nMang ket qua:";
		Xuat(c, l);
	}
	return 1;
}

string getInputFileName(int n)
{
	string fileName = string("intdata");
	if (n < 10)
		fileName += "0" + to_string(n) + ".inp";
	else
		fileName += to_string(n) + ".inp";
	return fileName;
}

string getOutputFileName(int n)
{
	string fileName = string("intdata");
	if (n < 10)
		fileName += "0" + to_string(n) + ".out";
	else
		fileName += to_string(n) + ".out";
	return fileName;
}

void Nhap(int a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
}

void Xuat(int a[], int n, string filename)
{
	ofstream fo(filename);
	fo << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(8) << a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

bool ktDoiXung(int k)
{
	int dn = 0;
	for (int t = k = abs(k); t != 0; t = t / 10)
		dn = dn * 10 + t % 10;
	return (dn == k);
	
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]))
		b[k++] = a[i];
}
