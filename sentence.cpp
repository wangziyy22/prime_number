#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, num4 =0, num5 = 0;
    char ch;

    cout << "Please enter a sentence(.indicates the end): ";
    cin.get(ch);
    while (ch != '.') {
        if ((ch  + 0 >= 97 && ch + 0 <= 122) && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) ++num1;
        else if ((ch  + 0 >= 97 && ch + 0 <= 122) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) ++num2;
        else if (ch == ' ') ++num3;
        else if (ch + 0 >= 48 && ch + 0 <= 57) ++num4;
        else ++num5;

        cin.get(ch);
    }

    cout << "元音字母的个数为：" << num1 << endl;
    cout << "辅音字母的个数为：" << num2 << endl;
    cout << "空格的个数为：" << num3 << endl;
    cout << "数字字符的个数为：" << num4 << endl;
    cout << "其他字符的个数为：" << num5 << endl;

    return 0;
}