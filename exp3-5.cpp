#include <iostream>
using namespace std;
int main()
{
	int num = 1;

	for (int i = 0; i < 9; i++)
	{
		num = (num + 1) * 2;
	}

	cout << "��һ��������Ϊ" << num << endl;

	return 0;
}