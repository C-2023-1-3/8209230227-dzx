#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	double c;
	double zc;

	cout << "输入三角形的三边" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a+b>c||a+c>b||b+c>a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "此三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "此三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "这三边不能构成三角形" << endl;
	}

	return 0;
}