#include <iostream>
using namespace std;

void rank1(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int* arr1;
	int size;
	cout << "输入数组大小" << endl;
	cin >> size;
	arr1 = new int[size];

	cout << "输入数组元素" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}



	rank1(arr1, size);

	int* p;
	p = arr1;
	for (int i = 0; i < size; i++)
	{
		cout << "指针地址为:" << p << " ";
		cout << "指针指向的值为" << *p << " ";
		p++;
	}

	p = arr1;
	delete p;

	return 0;
}