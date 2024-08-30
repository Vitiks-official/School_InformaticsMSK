#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    k /= n;
    cout << (m + k - 1) / k;
}
