#include <iostream>
using namespace std;
const float pi = 3.14f;

int main()
{	
	int r;
	int h;
	float v;

	cout << "输入圆锥体的半径" << endl;
	cin >> r;

	cout << "输入圆锥体的高" << endl;
	cin >> h;

	v = r*r*h*pi;
	cout << "圆锥体的体积为" << v << endl;

	return 0;
}