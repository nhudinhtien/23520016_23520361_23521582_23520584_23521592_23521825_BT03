#include<iostream>
using namespace std;
struct phanso
{
    int Tu;
    int Mau;
};

typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
int SoSanh(PHANSO, PHANSO);
void InterchangeSort(PHANSO[], int);
void Xuat(PHANSO);
void Xuat(PHANSO[], int);

int main()
{
    PHANSO a[100];
    int n;
    Nhap(a, n);
    cout << "Mang ban dau: ";
    Xuat(a, n);
    InterchangeSort(a, n);
    cout << "Mang sau khi sap xep: ";
    Xuat(a, n);
    return 0;
}

int SoSanh(PHANSO x, PHANSO y)
{
    float a = float(x.Tu) / x.Mau;
    float b = float(y.Tu) / y.Mau;
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    return 0;
}

void InterchangeSort(PHANSO a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (SoSanh(a[i], a[j]) == -1)
            {
                PHANSO temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Nhap(PHANSO& x)
{
    cout << "Nhap tu so: ";
    cin >> x.Tu;
    cout << "Nhap mau so: ";
    cin >> x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan so thu " << i + 1 << ":\n";
        Nhap(a[i]);
    }
}

void Xuat(PHANSO x)
{
    cout << x.Tu << "/" << x.Mau << " ";
}

void Xuat(PHANSO a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }
    cout << endl;
}