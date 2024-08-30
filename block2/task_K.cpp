#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 - x2 == 2)
        if (y1 - y2 == 1)
            cout << "YES";
        else
            if (y2 - y1 == 1)
                cout << "YES";
            else
                cout << "NO";
    else
        if (x2 - x1 == 2)
            if (y1 - y2 == 1)
                cout << "YES";
            else
                if (y2 - y1 == 1)
                    cout << "YES";
                else
                    cout << "NO";
        else
            if (x1 - x2 == 1)
                if (y1 - y2 == 2)
                    cout << "YES";
                else
                    if (y2 - y1 == 2)
                        cout << "YES";
                    else
                        cout << "NO";
            else
                if (x2 - x1 == 1)
                    if (y1 - y2 == 2)
                        cout << "YES";
                    else
                        cout << "NO";
                else
                    if (y2 - y1 == 2)
                        cout << "YES";
                    else
                        cout << "NO";
}
