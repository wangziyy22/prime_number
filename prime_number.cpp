#include <iostream>
using namespace std;

//检查因子个数法
// int main()
// {
//     int sum = 2, count = 1, num;     //1既不是素数，也不是合数；2是素数，所以sum初始化为2，count初始化为1

//     for (int i = 3; i <= 1000; i += 2) {
//         num = 0;

//         for (int j = 1; j <= i; j += 2) {
//             if (i % j == 0) ++num;
//         }

//         if (num == 2) {
//             ++count;
//             sum +=i;
//         }
//     }

//     cout << "1-100之间素数的个数为：" << count << endl;
//     cout << "1-100之间素数的和为：" << sum << endl;

//     return 0;
// }

//试除法——不适合处理非常大的数
// int main()
// {
//     int sum = 2, count = 1, num;
//     for (int i = 3; i <= 100; i+=2) {
//         num = 0;

//         for (int j = 2; j * j <= i; ++j) if (i % j == 0) ++num;     //所有大于2的偶数均为合数，所以只检查奇数即可

//         if (num == 0) {     //因子只有1和它本身
//             ++count;
//             sum += i;
//     }
//     }

//     cout << "1-100之间素数的个数为：" << count << endl;
//     cout << "1-100之间素数的和为：" << sum << endl;
    
//     return 0;
// }

//埃拉托斯特尼筛法
// int main()
// {
//     const int MAX = 100;
//     int sum = 0, count = 0;
//     bool isPrime[MAX + 1];

//     for (int i = 2; i <= MAX; ++i) isPrime[i] = true;     //初始化

//     for (int i = 2; i * i <= MAX; ++i) {
//         if (isPrime[i]) {
//             for (int j = i * i; j <= MAX; j += i) isPrime[j] = false;     //将i的倍数标记为非素数
//         }
//     }

//     for (int i = 2; i <= MAX; ++i) {
//         if (isPrime[i]) {
//             ++count;
//             sum += i;
//         }
//     }

//     cout << "1-100之间素数的个数为：" << count << endl;
//     cout << "1-100之间素数的和为：" << sum << endl;

//     return 0;
// }

int main()
{
    int num;
    bool isPrime = true;

    cout << "请输入一个正整数：";
    cin >> num;

    if (num == 1) cout << "1既不是素数，也不是合数" << endl;
    else if (num == 2) cout << "2是素数" << endl;
    else if (num % 2 == 0) cout << num << "不是素数" << endl;
    else {
    for (int i = 3; i <= num-2; i +=2) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (!isPrime) cout << num << "不是素数";
    else cout << num << "是素数";
    }
    
    return 0;
}