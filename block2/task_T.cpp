#include <iostream>
using namespace std;

int main() {
    int n, res10 = 0, res60 = 0;
    cin >> n;
    res60 += n / 60;
    n -= res60 * 60;
    if (n >= 35) {
        res60 += 1;
        n = 0;
    } else {
        res10 += n / 10;
        n -= res10 * 10;
        if (n == 9) {
            res10 += 1;
            n = 0;
        }
    }
    cout << n << " " << res10 << " " << res60;
}
