#include <iostream>
using namespace std;
int main()
{
    char a;

    int ln = 0, sn = 0, nn = 0, qt = 0;

    cout << "����һ���ַ���" << endl;
    
    while ((a = getchar()) && (a != '\n'))
    {
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
            ln=ln+ 1;
        else if (a >= '0' && a <= '9')
            nn =nn+ 1;
        else if (a == ' ')
            sn =sn+ 1;
        else
            qt =qt+ 1;
    }
    
    
    cout << "Ӣ����ĸ������" << ln << endl;
    cout << "�ո������" << sn << endl;
    cout << "���ָ�����" << nn << endl;
    cout << "�����ַ�������" << qt << endl;
   
    
    return 0;
}