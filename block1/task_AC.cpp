#include <iostream>
using namespace std;

int main() {
    int x1, y1, a, b, x2, y2, yy;
    cin >> x1 >> y1 >> a >> b >> x2 >> y2;
    y1 += x1 * 60;
    b += a * 60;
    y2 += (x2 + 24) * 60;
    yy = y2 - y1;
    b += 2 * yy;
    cout << b / 60 % 24<< " " << b % 60;
}
