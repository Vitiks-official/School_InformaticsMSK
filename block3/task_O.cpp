#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1, i = 2, c, n;
    cin >> n;
    while (b < n) {
        a += b;
        c = b;
        b = a;
        a = c;
        i++;
    }
    if (b == n) {
        cout << i;
    } else {
        cout << -1;
    }
}
