#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int D, F, s;
    cin >> D >> F;
    if (F == 1){
        cout << (D + 6) / 7;
    } else {
        cout << 1 + (D - 8 + F + 6) / 7;
    }
}
