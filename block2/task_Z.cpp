#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, M, K, s = 0;
    cin >> N >> M >> K;
    if ((K - 2) * (M / 2) < N) {
        cout << 0;
    } else {
        s += N / (K - 2);
        N -= s * (K - 2);
        M -= s * 2;
        s += (M + N + K - 1) / K;
        cout << s;
    }
}
