#include<iostream>
#include<iomanip>
using namespace std;
void LietKe(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la : " << endl;
	Xuat(a, n);
	cout<<endl << "Cac cap gia tri lan luot la : " << endl;
	LietKe(a, n);
	return 0;
}


void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
		   if (i != j)
		   {
			   cout << "(" << a[i] << ",";
			   cout << a[j] << ")"<< endl;
		   }
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	cout << "Mang ban dau : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(8) << setprecision(5) << a[i];
}

