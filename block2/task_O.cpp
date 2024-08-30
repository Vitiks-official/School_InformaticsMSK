#include <iostream>
using namespace std;

int main() {
    int a, b, c, some = 0;
    cin >> a >> b >> c;
    if (a == b)
        some += 1;
    if (a == c)
        some += 1;
    if (b == c)
        some += 1;
    if (some == 1)
        cout << 2;
    else
        cout << some;
}
