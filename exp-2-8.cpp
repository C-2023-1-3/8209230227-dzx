#include <iostream>
using namespace std;
int main()
{	
	double a;
	double b;

	cout << "请输入一个数字" << endl;
	cin >> a;


if (a>0) 
{
	b = a;
	for (;;)
	{	
		double temp = b;
		b = (b + a / b)/2;

		if ((temp - b) > -1e-5 && (temp - b) < 1e-5)
		{
			cout <<"其平方根为：" <<b << endl;
			break;
		}
	}
}
else if (a<0)
{
	a = -a;
	b = a;
	for (;;)
	{
		double temp = b;
		b = (b + a / b) / 2;

		if ((temp - b) > -1e-5 && (temp - b) < 1e-5)
		{
			cout <<"其平方根为："<< b <<"i"<< endl;
			break;
		}
	}
}
else if (a == 0)
{
	cout << "其平方根为：" << 0 << endl;
}
	return 0;
}