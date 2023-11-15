#include <iostream>
using namespace std;
int main()
{
	char A;
	int asc2;

	cout << "请输入一个字母" << endl;
	cin >> A;
	asc2 = (int)A;

	if (asc2 > 96 && asc2 < 123)
	{
		asc2 = asc2 - 32;
		A = (char)asc2;

		cout << "其大写字母为：" << A << endl;
	}
	else {
		asc2 += 1;
		cout << "输出其后继字符的ASCII码值为：" << asc2 << endl;
	}

	

	return 0;
}