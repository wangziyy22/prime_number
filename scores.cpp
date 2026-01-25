#include <iostream>
using namespace std;

// int main()
// {
//     int num = 0;
//     double score = 0, max = 0, min = 0, total = 0, average = 0;

//     cout << "请输入学生人数：";
//     cin >> num;

//     cout << "请输入学生成绩：" << endl;
//     for (int i = 0; i < num; ++i) {
//         if (i == 0) {
//             cin >> score;
//             max = score;
//             min = score;
//             total += score;
//         }
//         else {
//             cin >> score;
//             if (score > max) max = score;
//             else if (score < min) min = score;
//             total +=score;
//         }
//     }

//     average = total / num;

//     cout << "最高分为：" << max << " 最低分为：" << min << endl;
//     cout << "平均分为：" << average;

//     return 0;
// }

int main()
{
    int num = 0;
    double max, min, average, total = 0, value;

    cout << "请输入学生成绩（-1表示结束）：" << '\n';

    cin >> value;
    if (value == -1) cout << "未输入成绩"  << '\n';
    else {
        max = min = value;

    while (value != -1) {
        total += value;
        ++num;

        cin >> value;
        if (value == -1) break;
        if (value > max) max = value;
        if (value < min) min = value;
    }

    average = total / num;

    cout << "学生人数为：" << num << '\n';
    cout << "最高分为：" << max << " 最低分为：" << min << '\n';
    cout << "平均分为：" << average << '\n';
    }

    return 0;
}