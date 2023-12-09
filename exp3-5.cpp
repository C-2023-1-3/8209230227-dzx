#include <iostream>
using namespace std;
int main()
{
	int num = 1;

	for (int i = 0; i < 9; i++)
	{
		num = (num + 1) * 2;
	}

	cout << "第一天桃子数为" << num << endl;

	return 0;
}