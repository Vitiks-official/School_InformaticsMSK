#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, p1, p2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 > 0)
        if (y1 > 0)
            p1 = 1;
        else
            p1 = 2;
    else
        if (y1 > 0)
            p1 = 4;
        else
            p1 = 3;
    if (x2 > 0)
        if (y2 > 0)
            p2 = 1;
        else
            p2 = 2;
    else
        if (y2 > 0)
            p2 = 4;
        else
            p2 = 3;
    if (p1 == p2)
        cout << "YES";
    else
        cout << "NO";
}
