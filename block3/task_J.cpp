#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;
    while (i < n) {
        i *= 2;
    }
    if (i == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
