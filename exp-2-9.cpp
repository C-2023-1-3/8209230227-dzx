#include <iostream>
using namespace std;
int main()
{
	double num = 2;
	double mny = 0;
	double day = 1;

	for (;;)
	{
		mny = num * 0.8+mny;
		
		num = 2* num;
		if (num > 100)
		{
			break;
		}

		day++;
	}

	double pmny = mny / day;

	cout << "ÿ��ƽ������Ϊ��" << pmny << endl;
		
	return 0;
}