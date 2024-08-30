#include <iostream>
using namespace std;

int main() {
    int a, b, n, a1, b1;
    cin >> a >> b >> n;
    a1 = a * n + (b * n) / 100;
    b1 = (b * n) % 100;
    cout << a1 << " " << b1;
}
