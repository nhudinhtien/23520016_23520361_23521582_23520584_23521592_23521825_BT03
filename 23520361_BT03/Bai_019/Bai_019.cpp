#include <iostream>

using namespace std;


bool ktDang2m(int&);

bool ktDang2m(int& k)
{

	if (k < 1)
		return false;
	bool flag = true;
	int t = k;
	for (t;t > 1;t =t/ 2)
		if (t % 2 != 0)
			return false;
	return flag;
}

int main()
{
	int k;
	cin >> k;
	if (ktDang2m(k))
		cout << "co dang";
	else
		cout << "khong co dang";
	return 0;

}