#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	char c;
	double d;

	cout << "请输入参与运算的两个数字" << endl;
	cin >> a;
	cin >> b;

	cout << "请输入要进行的运算" << endl;
	cin >> c;

	if (c == '+')
	{
		d = a + b;
		cout << "结果为：" << d << endl;
	}

	if (c == '-')
	{
		d = a - b;
		cout << "结果为：" << d << endl;
	}

	if (c == '*')
	{
		d = a * b;
		cout << "结果为：" << d << endl;
	}

	if (c == '/'&&b!=0)
	{
		d = a / b;
		cout << "结果为：" << d << endl;
	}
	else if (b == 0) 
	{
		cout << "除数不能为0" << endl;
	}

	if (c == '%')
	{
		d = fmod(a,b);
		cout << "结果为：" << d << endl;
	}
	return 0;
}