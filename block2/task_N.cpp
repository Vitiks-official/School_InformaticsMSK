#include <iostream>
using namespace std;

int main() {
    int r1, k1, r2, k2, allK1, allK2, dif;
    cin >> r1 >> k1 >> r2 >> k2;
    allK2 = r1 * 100 + k1;
    allK1 = r2 * 100 + k2;
    dif = allK1 - allK2;
    cout << dif / 100 << " " << dif % 100;
}
