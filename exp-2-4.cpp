#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	char c;
	double d;

	cout << "����������������������" << endl;
	cin >> a;
	cin >> b;

	cout << "������Ҫ���е�����" << endl;
	cin >> c;

	if (c == '+')
	{
		d = a + b;
		cout << "���Ϊ��" << d << endl;
	}

	if (c == '-')
	{
		d = a - b;
		cout << "���Ϊ��" << d << endl;
	}

	if (c == '*')
	{
		d = a * b;
		cout << "���Ϊ��" << d << endl;
	}

	if (c == '/'&&b!=0)
	{
		d = a / b;
		cout << "���Ϊ��" << d << endl;
	}
	else if (b == 0) 
	{
		cout << "��������Ϊ0" << endl;
	}

	if (c == '%')
	{
		d = fmod(a,b);
		cout << "���Ϊ��" << d << endl;
	}
	return 0;
}