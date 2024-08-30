#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    if (k < n * m)
        if (k % m == 0)
            cout << "YES";
        else
            if (k % n == 0)
                cout << "YES";
            else
                cout << "NO";
    else
        cout << "NO";
}
