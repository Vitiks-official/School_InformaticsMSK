#include <iostream>
using namespace std;

int main() {
    int num, h, m, s;
    cin >> num;
    h = num / 3600 % 24;
    m = num / 60 % 60;
    s = num % 60;
    cout << h << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10;
}
