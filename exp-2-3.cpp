#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	double c;
	double zc;

	cout << "���������ε�����" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a+b>c||a+c>b||b+c>a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else
	{
		cout << "�����߲��ܹ���������" << endl;
	}

	return 0;
}