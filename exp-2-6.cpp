#include<iostream>
using namespace std;
int main()
{	
	int a;
	int b;

	
	cout << "��������������" << endl;
	cin >> a;
	cin >> b;
	
		for (int d=a;;d++)
		{
			if(d%a==0&&d%b==0)
			{ 
			 cout << "��С������Ϊ��" <<d<< endl;

			 break;
			}
		}
		
		for (;;)
		{	
			int d = 0;
			if (a > b)
			{
				d = a % b;
				a = d;
			}
			else if (a < b)
			{
				d = b % a;
				b = d;
			}

			if (d == 0) {
				break;
			}
		}
		if (a != 0)
		{
			cout <<"���Լ��Ϊ��"<< a << endl;
		}
		else
		{
			cout << "���Լ��Ϊ��"<< b << endl;
		}

		
		

	
	


	return 0;
}