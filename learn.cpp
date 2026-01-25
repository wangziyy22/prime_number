#include <iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'C'; ++i) {
        for (char j = 'A'; j <= 'C'; ++j) {
            if (j == i) continue;

            for (char k = 'A'; k <= 'C'; ++k) {
                if (k == i|| k == j) continue;
                
                cout << i << j << k << '\t';
            }        
        }
    }

    return 0;
}