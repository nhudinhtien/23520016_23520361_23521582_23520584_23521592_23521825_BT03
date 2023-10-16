#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void ConLonNhat(float[], int, int&, int&);
float TongCon(float[], int, int, int);
int main() {
	int n;
	float a[100];
	int vt = 0, l = 1;
	Nhap(a, n);
	cout << "cac so la: " << endl;
	Xuat(a, n);
	int vtd, vtc;
	ConLonNhat(a, n, vtd, vtc);
	TongCon(a, n, vt, l);
	cout << " mang con co tong lon nhat trong mang mot chieu cac so thuc la: " << vtd << "va" << vtc;

	return 0;
}
void Nhap(float a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i] << endl;
}
float TongCon(float a[], int n, int vt, int l) {
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}
void ConLonNhat(float a[], int n, int& vtd, int& vtc) {
	vtd = vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++) {
		for (int vt = 0; vt <= n - 1; vt++) {
			if (TongCon(a, n, vt, vt + l - 1) > sln) {
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
		}
	}
}