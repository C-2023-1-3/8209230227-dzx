#include <iostream>
using namespace std;
int main()
{
	char A;
	int asc2;

	cout << "������һ����ĸ" << endl;
	cin >> A;
	asc2 = (int)A;

	if (asc2 > 96 && asc2 < 123)
	{
		asc2 = asc2 - 32;
		A = (char)asc2;

		cout << "���д��ĸΪ��" << A << endl;
	}
	else {
		asc2 += 1;
		cout << "��������ַ���ASCII��ֵΪ��" << asc2 << endl;
	}

	

	return 0;
}