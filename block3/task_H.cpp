#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while (a <= b) {
        if (a % d == c)
            cout << a << " ";
        a++;
    }
}
