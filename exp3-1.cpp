#include<iostream>
using namespace std;

void test01(int* a,int* b)
{
	for (int d = *a;; d++)
	{
		if (d % *a == 0 && d % *b == 0)
		{
			cout << "��С������Ϊ��" << d << endl;

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
		cout << "���Լ��Ϊ��" << *a << endl;
	}
	else
	{
		cout << "���Լ��Ϊ��" << *b << endl;
	}
}

int main()
{
	int m;
	int n;
	cout << "������Ȼ��m��n" << endl;

	cin >> m;
	cin >> n;

	test01(&m,&n);

	return 0;
}