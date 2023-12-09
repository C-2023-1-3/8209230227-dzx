#include <iostream>
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] > 64 && s[i] < 91)
		{
			counts[s[i] - 65]++;
		}
		else if(s[i]>96&&s[i]<123)
		{
			counts[s[i] - 97]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0)
		{
			cout << (char)(i + 65) << ":" << counts[i] << "times" << endl;
		}
	}


}

int main()
{
	int counts[26];
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}

	cout << "Enter a string:";
	char s[99];
	cin >> s;

	count(s, counts);

	return 0;
}