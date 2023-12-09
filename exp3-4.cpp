#include <iostream>
#include "mytriangle.h"
using namespace std;

int main()
{
	int side1;
	int side2;
	int side3;
	cout << "输入三角形的三边长" << endl;
	cin >> side1;
	cin >> side2;
	cin >> side3;

	if (is_valid(side1, side2, side3) == 1)
	{
		cout << "三角形面积为" << the_area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "输入错误" << endl;
	}
}