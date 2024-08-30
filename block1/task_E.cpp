#include <iostream>
using namespace std;

int main() {
    int num, s, d, e;
    cin >> num;
    s = num / 100;
    d = num / 10 % 10;
    e = num % 10;
    cout << s + d + e;
}
