#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (B < D) {
        cout << A + (D - B) * C;
    } else {
        cout << A;
    }
}
