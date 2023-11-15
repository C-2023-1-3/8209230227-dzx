#include <iostream>
using namespace std;
int main()
{

	for (int i = 0;i < 4 ;i++ )
	{
		double x;
		double y;
		cout << "ÊäÈëÊý×Ö" << endl;
		cin >> x;

		if (x>0 && x<1)
		{
			y = -2*x + 3;
			cout << y << endl;
		}
		else if(x>=1&&x<5)
		{
			y = 2 / (4 * x) + 1;
			cout << y << endl;
		}
		else if (x >= 5 && x < 10)
		{
			y = x * x;
			cout << y << endl;
		}
	}

	return 0;
}