#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

string getInputFileName(int);
string getOutputFileName(int);
void Nhap(float[], int&, string);
void Xuat(float[], int, string);
void Xuat(float[], int);

int main()
{
	float b[100000];
	int n;
	for (int i = 1; i <= 13; i++)
		{
		string FileName = getInputFileName(i);
		Nhap(b, n, FileName);
		
			cout << "\n" << FileName << endl;
		Xuat(b, n);
		
			FileName = getOutputFileName(i);
		Xuat(b, n, FileName);
		}
	return 1;
	}

string getInputFileName(int n)
{
	string fileName = string("floatdata");
	if (n < 10)
		fileName += "0" + to_string(n) + ".inp";
	else
		fileName += to_string(n) + ".inp";
	return fileName;
	}

string getOutputFileName(int n)
{
	string fileName = string("floatdata");
	if (n < 10)
		fileName += "0" + to_string(n) + ".out";
	else
		fileName += to_string(n) + ".out";
	return fileName;
}

void Nhap(float a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
	}

void Xuat(float a[], int n, string filename)
{
	ofstream fo(filename);
	fo << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(8) << setprecision(5) << a[i];
	}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(5) << a[i];
}
