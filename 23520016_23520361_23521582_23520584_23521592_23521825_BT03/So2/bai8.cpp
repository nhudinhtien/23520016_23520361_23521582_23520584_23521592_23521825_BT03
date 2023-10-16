#include<iostream>
#include<math.h>
using namespace std;
void NhapMang(int a[], int n) 
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool check(int n) 
{
	n = abs(n);
	do {
		int temp = n % 10;
		if (n % 2 == 0)
			return false;
		n /= 10;
	} while (n > 0);
	return true;
}

void Fun(int a[], int n) 
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (check(a[i])) {
			cout << a[i] << " ";
			count++;
		}
	}
	if (count == 0)
		cout << "Khong ton tai gia tri co toan chu so le";
}
int main() 
{
	int a[100];
	int n;
	cout << "Nhap vao n: ";
	cin >> n;
	NhapMang(a, n);
	Fun(a, n);
	system("pause");
	return 0;
}