#include <iostream>
using namespace std;

bool is_prime(int num)
{
	int rb = 1;
	if (num == 1)
	{
		rb = 1;
	}
	else if(num==2)
	{
		rb = 0;
	}
	else
	{
	for (int i =2; i<num; i++)
	{
		if (num % i == 0)
		{
			rb = 0;
		}
	}
}

	return rb;
}

int main()
{
	int n = 1;

	for (int j = 1;; j++)
	{
		 if (is_prime(j) == 1)
		 {
		 	cout << j<<" ";
		 	n++;	
		 	if (n % 10 == 0)
		 {
			cout << endl;
		 }
		 if (n == 200)
		 {
			break;
		 }
		}

	}

	return 0;
}