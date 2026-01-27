#include <iostream>
#include <cmath>
using namespace std;

// int main()
// {
//     double ex = 0, x;
//     int n = 0, p = 1;

//     cout << "请输入x的值：";
//     cin >> x;

//     while (pow(x, n) / p >= 0.000001) {
//         ex += pow(x, n) / p;
//         ++n;
//         p *= n;
//     }

//     cout << "ex的近似值为" << ex;

//     return 0;
// }

int main()
{
    double ex = 0.0, x, xn = 1.0;
    int n = 0, p = 1;

    cout << "请输入x的值：";
    cin >> x;

    while (xn / p >= 1e-6) {
        ex += xn / p;
        ++n;
        xn *= x;
        p *= n;
    }

    cout << "ex的近似值为" << ex;

    return 0;
}