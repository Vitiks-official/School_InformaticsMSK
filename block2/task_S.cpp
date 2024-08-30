#include <iostream>
using namespace std;

int main() {
    int i, j;
    cin >> i >> j;
    if (i != j)
        cout << i + j - 1;
    else
        cout << 0;
}
