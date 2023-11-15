#include <iostream>
using namespace std;
int main()
{
    char a;

    int ln = 0, sn = 0, nn = 0, qt = 0;

    cout << "输入一行字符：" << endl;
    
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
    
    
    cout << "英文字母个数：" << ln << endl;
    cout << "空格个数：" << sn << endl;
    cout << "数字个数：" << nn << endl;
    cout << "其他字符个数：" << qt << endl;
   
    
    return 0;
}