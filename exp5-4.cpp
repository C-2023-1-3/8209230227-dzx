//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student(int Sid, int Score)
//	{
//		this->Sid = Sid;
//		this->Score = Score;
//	}
//
//	int Sid;
//	int Score;
//};
//
//void max(Student* s)
//{
//	int maxSid = s[0].Sid;
//	int maxScore = s[0].Score;
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (s[i].Score < s[i + 1].Score)
//		{
//			maxSid = s[i + 1].Sid;
//			maxScore = s[i + 1].Score;
//		}
//	}
//
//	cout << "�ɼ�����ߵĳɼ�Ϊ��" << maxScore << endl;
//	cout << "�ɼ�����ߵ�ѧ��Ϊ��" << maxSid << endl;
//
//}
//
//int main()
//{
//	Student student[5] =
//	{
//		Student(1,100),
//		Student(2,99),
//		Student(3,98),
//		Student(4,97),
//		Student(5,96),
//	};
//
//	max(student);
//
//	return 0;
//}