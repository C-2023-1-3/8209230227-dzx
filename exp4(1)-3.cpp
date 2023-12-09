#include <iostream>
using namespace std;
int main()
{
	bool boxopen[100];
	for (int i = 0; i < 100; i++)
	{
		boxopen[i] = 0;
	}

	for (int i = 1; i < 101; i++)
	{
		for (int j = i; j < 101; j = j + i)
		{
			if (boxopen[j-1] == 1)
			{
				boxopen[j-1] = 0;
			}
			else
			{
				boxopen[j-1] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		if (boxopen[i] == 1)
		{
			cout << i+1 << " ";
		}
	}

	return 0;
}