#include <iostream>
using namespace std;

int main() {
    int num, m = 540;
    cin >> num;
    m = m + num * 45 + (num - 1) * 5 + (num - 1) / 2 * 10;
    cout << m / 60 << " " << m % 60;
}
