#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0)
        if (abs(a) <= b)
            a -= (b + 1);
        else
            a -= b;
    else
        a -= b;
    if (a < 0)
        if (abs(a) <= c)
            a += (c + 1);
        else
            a += c;
    else
        a += c;
    cout << a;
}
