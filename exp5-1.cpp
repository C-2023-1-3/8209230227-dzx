//#include <iostream>
//using namespace std;
//class Time             // 定义Time类
//{
//public: 
//	void Settime()
//	{
//		cout << "输入时间" << endl;
//
//		cin >> this->hour; 
//		cin >> this->minute;
//		cin >>this->sec;
//	}
//	
//	//将输入和输出的功能改为由成员函数实现
//	//在类体内定义成员函数
//	void Printtime()
//	{
//		cout << "时间为：";
//		cout << this->hour << "：" << this->minute << "：" << this->sec << endl;
//	}
//private:// 数据成员为私有的
//	int hour;
//	int minute;
//	int sec;
//};
//int main()
//{
//	Time t1;           //定义t1为Time类对象
//	t1.Settime();
//	t1.Printtime();
//
//	return 0;
//}