#include<iostream>
using namespace std;

void test01(int* a,int* b)
{
	for (int d = *a;; d++)
	{
		if (d % *a == 0 && d % *b == 0)
		{
			cout << "最小公倍数为：" << d << endl;

			break;
		}
	}

	for (;;)
	{
		int d = 0;
		if (*a > *b)
		{
			d = *a % *b;
			*a = d;
		}
		else if (*a < *b)
		{
			d = *b % *a;
			*b = d;
		}

		if (d == 0) {
			break;
		}
	}
	if (*a != 0)
	{
		cout << "最大公约数为：" << *a << endl;
	}
	else
	{
		cout << "最大公约数为：" << *b << endl;
	}
}

int main()
{
	int m;
	int n;
	cout << "输入自然数m和n" << endl;

	cin >> m;
	cin >> n;

	test01(&m,&n);

	return 0;
}