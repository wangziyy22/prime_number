#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    double score = 0, max = 0, min = 0, total = 0, average = 0;

    cout << "请输入学生人数：";
    cin >> num;

    cout << "请输入学生成绩：" << endl;
    for (int i = 0; i < num; ++i) {
        if (i == 0) {
            cin >> score;
            max = score;
            min = score;
            total += score;
        }
        else {
            cin >> score;
            if (score > max) max = score;
            else if (score < min) min = score;
            total +=score;
        }
    }

    average = total / num;

    cout << "最高分为：" << max << " 最低分为：" << min << endl;
    cout << "平均分为：" << average;

    return 0;
}
