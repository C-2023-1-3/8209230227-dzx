#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2)
{

	int p = 0;
	int r = -1;

	for (int i = 0; i < strlen(s2); i++)
	{

		if (s1[0] == s2[i])
		{
			p = 1;
			r = i;
			for (int j = 1; j < strlen(s1); j++)
			{
				if (s1[j] != s2[i + j])
				{
					p = 0;
					r = -1;
					break;
				}
			}
		}
		if (p == 1)break;

	}

	return r;
}


int main()
{
	cout << "Enter the first string:";
	char s1[99];
	cin.getline(s1, 99);


	cout << "Enter the second string:";
	char s2[99];
	cin.getline(s2, 99);

	cout << indexof(s1, s2) << endl;;
	

	return 0;
}