#include <iostream>
#include "mytriangle.h"
using namespace std;

int main()
{
	int side1;
	int side2;
	int side3;
	cout << "���������ε����߳�" << endl;
	cin >> side1;
	cin >> side2;
	cin >> side3;

	if (is_valid(side1, side2, side3) == 1)
	{
		cout << "���������Ϊ" << the_area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "�������" << endl;
	}
}