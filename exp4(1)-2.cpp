#include <iostream>
using namespace std;

void show(double list[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
}

int main()
{
	cout << "ÊäÈë10¸öÊý" << endl;
	double list[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}

	for (int i = 0; i < 9; i++)
	{
		bool changed = true;
		do
		{
			changed = false;
			for (int j = 0; j < 9; j++)
				if (list[j] > list[j + 1])
				{
					int n1 = list[j];
					list[j] = list[j + 1];
					list[j + 1] = n1;
					changed = true;
				}
		} while (changed);
	}

	show(list);

	return 0;
}