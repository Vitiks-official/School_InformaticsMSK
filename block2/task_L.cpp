#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (abs(x1 - x2) == 1)
        if (abs(y1 - y2) == 1)
            cout << "YES";
        else
            if (y1 == y2)
                cout << "YES";
            else
                cout << "NO";
    else
        if (x1 == x2)
            if (abs(y1 - y2) == 1)
                cout << "YES";
            else
                if (y1 == y2)
                    cout << "YES";
                else
                    cout << "NO";
        else
            cout << "NO";
}
