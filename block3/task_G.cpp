#include <iostream>
using namespace std;

int main() {
    int n, f = 1, i = 1;
    cin >> n;
    while (i <= n) {
        f *= i;
        i += 1;
    }
    cout << f;
}
