#include<iostream>
using namespace std;
int main()
{
	//Int i = k + 1; 
	//Int应该改为int,k还未定义
	
	int k = 0;
	int i = k + 1;

	cout << i++ << endl;
	
	//int i = 1;
	//i重复定义
	cout << i++ << endl;
	
	cout << "Welcome to C++" << endl;
	return 0;
}