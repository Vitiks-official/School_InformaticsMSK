#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b;
    if (a == 0)
        if (b == 0)
            cout << "INF";
        else
            cout << "NO";
    else
        if (b % a != 0)
            cout << "NO";
        else
            cout << -b / a;
}
