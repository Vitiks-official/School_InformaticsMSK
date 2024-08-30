#include <iostream>
using namespace std;

int main() {
    int maxn, a, b;
    cin >> a >> b >> maxn;
    if (maxn < a)
        maxn = a;
    if (maxn < b)
        maxn = b;
    cout << maxn;
}
