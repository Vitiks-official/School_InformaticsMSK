#include <iostream>
using namespace std;

int main() {
    int n, i = 1, s = 0;
    cin >> n;
    while (i < n) {
        s += (i * (i + 1));
        cout << i << "*" << i + 1;
        i++;
        if (i < n) {
            cout << "+";
        }
    }
    cout << "=" << s;
}
