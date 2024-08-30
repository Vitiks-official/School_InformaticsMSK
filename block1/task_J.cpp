#include <iostream>
using namespace std;

int main() {
    int K;
    cin >> K;
    cout << 8 + (K * 45 + (K - 1) * 5) / 60 << " " << (K * 45 + (K - 1) * 5) % 60;
}
