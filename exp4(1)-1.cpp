#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int b=0;
	cout << "The distinct numbers are:";
	cout << arr[0] << " ";
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				b = 1;
			}
		}
		if (b == 0)
		{
			cout << arr[i] << " ";
		}
	}

	return 0;
}