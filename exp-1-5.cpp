#include <iostream>
using namespace std;
int main()
{	
	double C;
	double F;

	cout << "输入华氏温度：" << endl;
	cin >> F;

	C = (F - 32) / 1.8;

	cout << "摄氏温度为：" <<C<< endl;

	return 0;
}