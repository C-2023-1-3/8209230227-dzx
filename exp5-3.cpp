#include <iostream>
using namespace std;

class RTG
{
public:
	void Sert()
	{
		cout << "���������볤�����ĳ�����͸�" << endl;
		cin >> length;
		cin >> width;
		cin >> height;
	}

	void PrintVec()
	{
		cout << "���������Ϊ��";
		cout << length * width * height << endl;
	}

private:
	int length;
	int width;
	int height;
};

int main()
{
	RTG r1;
	RTG r2;
	RTG r3;

	r1.Sert();
	r2.Sert();
	r3.Sert();

	r1.PrintVec();
	r2.PrintVec();
	r3.PrintVec();
}