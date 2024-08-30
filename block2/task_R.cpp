#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;
    if (k < n) {
        n *= 2;
        n = (n + k - 1) / k;
        cout << n * m;
    } else {
        cout << m * 2;
    }
}
