#include <iostream>
using namespace std;


int parseHex(const char* const hexString)
{
	int s=0;
	int m = 1;;

	for (int i = strlen(hexString)-1; i>-1; i--)
	{
		if (hexString[i] > 64)
		{
			s =s+(hexString[i] - 55) * m;
		}
		else if(hexString[i]<58)
		{
			s = s+(hexString[i]-48) * m;
		}
		m = m * 16;
		
	}
	return s;
}

int main()
{
	cout << parseHex("A5") << endl;


	return 0;
}