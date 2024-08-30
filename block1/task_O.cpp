#include <iostream>
using namespace std;

int main() {
    int a, b, l, N, sum;
    cin >> a >> b >> l >> N;
    sum = l * 2 + (N * 2 - 1) * a + (N - 1) * 2 * b;
    cout << sum;
}
