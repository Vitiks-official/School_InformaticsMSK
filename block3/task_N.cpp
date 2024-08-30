#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1, i = 2, c, n;
    cin >> n;
    while (i < n) {
        a += b;
        c = b;
        b = a;
        a = c;
        i++;
    }
    cout << b;
}
