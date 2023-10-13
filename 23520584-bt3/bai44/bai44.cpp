#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
			a[i] = rand() % 100 - rand() % 100;
	}
}
int TongCucDai(int a[], int n)
{
	 if (n <= 1)
		 return 0;
	 int s = 0;
	 if (a[0] > a[1])
		 s = s + a[0];
	 for (int i = 1; i <= n - 2; i++)
		 if (a[i] > a[i - 1] && a[i] > a[i + 1])
			 s = s + a[i];
	 if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	 return s;
}
int TongCucTieu(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] < a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			s = s + a[i];
	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}
int TongCucTri(int a[], int n)
{
	int s1 = TongCucDai(a, n);
	int s2 = TongCucTieu(a, n);
    return (s1 + s2);
}
int main()
{
	int n, a[MAX];
	cout << "So luong phan tu: "; cin >> n;
	NhapMang(a, n);
	TongCucDai(a,n);
	TongCucTieu(a, n);
	cout<< TongCucTri(a, n);
	cout << endl;
	return 0;
}