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
	cout << "���������С" << endl;
	cin >> size;
	arr1 = new int[size];

	cout << "��������Ԫ��" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}



	rank1(arr1, size);

	int* p;
	p = arr1;
	for (int i = 0; i < size; i++)
	{
		cout << "ָ���ַΪ:" << p << " ";
		cout << "ָ��ָ���ֵΪ" << *p << " ";
		p++;
	}

	p = arr1;
	delete p;

	return 0;
}